#include "main.h"


int main(int argc, char *argv[])
{
    // Création d'une fenêtre en SFML
    RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32),
                        "Rabidja 3.0 - Chapitre 3 - Big Tuto SFML2 - www.meruvia.fr");

    //Limite les fps à 60 images / seconde
    window.setFramerateLimit(60);

    //On active la synchro verticale
    window.setVerticalSyncEnabled(true);

    //Instanciation des classes
    TileMap tilemap("../lvl1.tmx");
    Input input;
    Player player;


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

    // Boucle infinie, principale, du jeu
    while (window.isOpen()) {

        // GESTION DES INPUTS (CLAVIER, JOYSTICK) **/
        input.gestionInputs(window);

        // On efface l'écran et on l'affiche
        window.clear();

        // DRAW
        window.draw(tilemap);
        window.draw(player);
//        window.draw(sprite);

        // DISPLAY
        window.display();
    }

// On quitte
    return 0;
}