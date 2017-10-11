#include "main.h"


int main(int argc, char *argv[])
{
    // Création d'une fenêtre en SFML

    RenderWindow window(VideoMode(screenDimensions.x, screenDimensions.y, 32),
                        "Mario - LittleBigGame - Etna");

    //Limite les fps à 60 images / seconde
    window.setFramerateLimit(60);

    //On active la synchro verticale
    window.setVerticalSyncEnabled(true);

    //Instanciation des classes
    TileMap tilemap("../lvl1.tmx");
    Input input;
    PlayerSprite player;


//    sf::Texture texture;
//    if (!texture.loadFromFile("../perso-mario.png"))
//    {
//        printf("Impossible de charger la texture du personnage.");
//    }
//    sf::Sprite sprite;
//    sprite.setTexture(texture);
//    sprite.setTextureRect(sf::IntRect(10, 10, 50, 30));
//    sprite.setPosition(240, 100);

    // A inclure dans le constructeur de Tilemap directement ?
    if (!tilemap.load("../mario-tile-map.png", sf::Vector2u(16, 16), 100, 100)){
        return -1;
    }

    sf::Texture texture;
    if (!texture.loadFromFile("../player.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }

    // set up the animations for all four directions (set spritesheet and push frames)
    PlayerAnimation walkingAnimationDown;
    walkingAnimationDown.setSpriteSheet(texture);
    walkingAnimationDown.addFrame(sf::IntRect(32, 0, 32, 32));
    walkingAnimationDown.addFrame(sf::IntRect(64, 0, 32, 32));
    walkingAnimationDown.addFrame(sf::IntRect(32, 0, 32, 32));
    walkingAnimationDown.addFrame(sf::IntRect( 0, 0, 32, 32));

    PlayerAnimation walkingAnimationLeft;
    walkingAnimationLeft.setSpriteSheet(texture);
    walkingAnimationLeft.addFrame(sf::IntRect(32, 32, 32, 32));
    walkingAnimationLeft.addFrame(sf::IntRect(64, 32, 32, 32));
    walkingAnimationLeft.addFrame(sf::IntRect(32, 32, 32, 32));
    walkingAnimationLeft.addFrame(sf::IntRect( 0, 32, 32, 32));

    PlayerAnimation walkingAnimationRight;
    walkingAnimationRight.setSpriteSheet(texture);
    walkingAnimationRight.addFrame(sf::IntRect(32, 64, 32, 32));
    walkingAnimationRight.addFrame(sf::IntRect(64, 64, 32, 32));
    walkingAnimationRight.addFrame(sf::IntRect(32, 64, 32, 32));
    walkingAnimationRight.addFrame(sf::IntRect( 0, 64, 32, 32));

    PlayerAnimation walkingAnimationUp;
    walkingAnimationUp.setSpriteSheet(texture);
    walkingAnimationUp.addFrame(sf::IntRect(32, 96, 32, 32));
    walkingAnimationUp.addFrame(sf::IntRect(64, 96, 32, 32));
    walkingAnimationUp.addFrame(sf::IntRect(32, 96, 32, 32));
    walkingAnimationUp.addFrame(sf::IntRect( 0, 96, 32, 32));

    PlayerAnimation* currentAnimation = &walkingAnimationDown;

    // set up AnimatedSprite
    PlayerSprite playerSprite(sf::seconds(0.2), true, false);
    playerSprite.setPosition(sf::Vector2f(screenDimensions / 2));

    sf::Clock frameClock;

    float speed = 80.f;
    bool noKeyWasPressed = true;

    // Boucle infinie, principale, du jeu
    while (window.isOpen()) {

        // GESTION DES INPUTS (CLAVIER, JOYSTICK) **/
//        input.gestionInputs(window);

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                window.close();
        }

        sf::Time frameTime = frameClock.restart();

        // if a key was pressed set the correct animation and move correctly
        sf::Vector2f movement(0.f, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            currentAnimation = &walkingAnimationUp;
            movement.y -= speed;
            noKeyWasPressed = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            currentAnimation = &walkingAnimationDown;
            movement.y += speed;
            noKeyWasPressed = false;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            currentAnimation = &walkingAnimationLeft;
            movement.x -= speed;
            noKeyWasPressed = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            currentAnimation = &walkingAnimationRight;
            movement.x += speed;
            noKeyWasPressed = false;
        }
        playerSprite.play(*currentAnimation);
        playerSprite.move(movement * frameTime.asSeconds());

        // if no key was pressed stop the animation
        if (noKeyWasPressed)
        {
            playerSprite.stop();
        }
        noKeyWasPressed = true;

        // update AnimatedSprite
        playerSprite.update(frameTime);

        // On efface l'écran et on l'affiche
        window.clear();

        // DRAW
        window.draw(tilemap);
        window.draw(playerSprite);

        // DISPLAY
        window.display();
    }

// On quitte
    return 0;
}