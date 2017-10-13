#include "main.h"

bool Collision(sf::Vector2f box1,sf::Vector2f box2, PlayerSprite playerSprite)
{
    if((box2.x >= box1.x + 16)      // trop à droite
       || (box2.x + playerSprite.getLocalBounds().width <= box1.x) // trop à gauche
       || (box2.y >= box1.y + 16) // trop en bas
       || (box2.y + playerSprite.getLocalBounds().height <= box1.y))  // trop en haut
        return false;
    else
        return true;
}

//bool checkIfNextTileIsNotSolid(sf::Vector2f playerPosition, TileMap tileMap, float speed, std::string type){
bool checkIfNextTileIsNotSolid(PlayerSprite playerSprite, TileMap tileMap, float speed, std::string type, sf::Time frameTime){


    sf::Vector2f expectedPosition = playerSprite.getPosition();
    if(type == "right"){
        printf("Player X-Y position :%f - %f \n", playerSprite.getPosition().x, playerSprite.getPosition().y);
        expectedPosition.x = expectedPosition.x + speed * frameTime.asSeconds();
    }
    else if (type == "left"){
        expectedPosition.x = expectedPosition.x - speed * frameTime.asSeconds();
    }
    else if (type == "down"){
        expectedPosition.y = expectedPosition.y + speed * frameTime.asSeconds();
    }

    for (int i = 0; i < tileMap.m_solidTilesPostions.size(); i++){

        if (Collision(tileMap.m_solidTilesPostions[i], expectedPosition, playerSprite)){
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    // Création d'une fenêtre en SFML
    RenderWindow window(VideoMode(screenDimensions.x, screenDimensions.y, 32),
                        "Mario - LittleBigGame - Etna");

    //Limite les fps à 60 images / seconde
    window.setFramerateLimit(60);

    //On active la synchro verticale
    window.setVerticalSyncEnabled(true);

    //font
    sf::Font font;
    if (!font.loadFromFile("../Roboto-Bold.ttf"))
    {
        printf("Ouesh j'arrive pas à la charger ta police de merde !\n");
    }
    sf::Text text;
    text.setFont(font); // font is a sf::Font
    text.setString("Game Over ! Try again :)");
    text.setCharacterSize(24); // in pixels, not points!
//    text.setColor(sf::Color::Red);
//    text.setStyle(sf::Text::Bold | sf::Text::Underlined);
    text.setPosition(300, 150);
    bool alreadyLoose = false;

    //Instanciation des classes
    TileMap tilemap("../lvl1.tmx");
    Input input;
    PlayerSprite player;

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

    PlayerAnimation walkingAnimationJump;
    walkingAnimationJump.setSpriteSheet(texture);
    walkingAnimationJump.addFrame(sf::IntRect(32, 0, 32, 32));
    walkingAnimationJump.addFrame(sf::IntRect(64, 0, 32, 32));
    walkingAnimationJump.addFrame(sf::IntRect(32, 0, 32, 32));
    walkingAnimationJump.addFrame(sf::IntRect( 0, 0, 32, 32));

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
    playerSprite.setPosition(sf::Vector2f(10, 10));


    // Set up timers
    sf::Clock frameClock;
    sf::Clock jumpClock;
    sf::Clock gameoverClock;

    // Set up speed and gravity
    float speed = 150.f;
    float gravity = 100;
    bool noKeyWasPressed = true;

    // Boucle infinie, principale, du jeu
    while (window.isOpen()) {

        // printf ("%d elapsed time\n", jumpClock.getElapsedTime().asMilliseconds()/1000);

        // GESTION DES INPUTS (CLAVIER, JOYSTICK) **/
        // input.gestionInputs(window);

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
            int jumpClockElapsedInSecond = jumpClock.getElapsedTime().asMilliseconds()/1000;
            if(jumpClockElapsedInSecond > 1){
                currentAnimation = &walkingAnimationJump;
                jumpClock.restart();
//                movement.y -= speed;
                movement.y = movement.y - 5000;
            }
            noKeyWasPressed = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            currentAnimation = &walkingAnimationDown;
            if (checkIfNextTileIsNotSolid(playerSprite, tilemap, speed, "down", frameTime)) {
                movement.y += speed;
            }
            noKeyWasPressed = false;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            currentAnimation = &walkingAnimationLeft;
            if (checkIfNextTileIsNotSolid(playerSprite, tilemap, speed, "left", frameTime)){
                movement.x -= speed;
            }
            noKeyWasPressed = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            currentAnimation = &walkingAnimationRight;
            if (checkIfNextTileIsNotSolid(playerSprite, tilemap, speed, "right", frameTime)) {
                movement.x += speed;
            }
            noKeyWasPressed = false;
        }
        playerSprite.play(*currentAnimation);

        //ADD GRAVITY FORCE
        if (checkIfNextTileIsNotSolid(playerSprite, tilemap, speed, "down", frameTime)) {
            movement.y = movement.y + gravity;
        }

        playerSprite.move(movement * frameTime.asSeconds());
//        playerSprite.getPosition()

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
        if (playerSprite.getPosition().y > 500){
            playerSprite.setPosition(sf::Vector2f(10, 10));
            gameoverClock.restart();
            alreadyLoose = true;
        }
        int gameoverClockElapsedInSecond = gameoverClock.getElapsedTime().asMilliseconds()/1000;
        if(gameoverClockElapsedInSecond < 2 && alreadyLoose) {
            window.draw(text);
        }

        // DISPLAY
        window.display();
    }

// On quitte
    return 0;
}