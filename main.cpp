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

    TileMap tilemap("../lvl1.tmx");

    //Instanciation des classes
    Input input;

        //Chargement de la texture
//    sf::Texture texture;
//    if (!texture.loadFromFile("../mario-tile-map.png")){
//        return -1;
//    }


    const int level[] =
            {
                    0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                    0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0,
                    1, 1, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3,
                    0, 1, 0, 0, 2, 0, 3, 3, 3, 0, 1, 1, 1, 0, 0, 0,
                    0, 1, 1, 0, 3, 3, 3, 0, 0, 0, 1, 1, 1, 2, 0, 0,
                    0, 0, 1, 0, 3, 0, 2, 2, 0, 0, 1, 1, 1, 1, 2, 0,
                    2, 0, 1, 0, 3, 0, 2, 2, 2, 0, 1, 1, 1, 1, 1, 1,
                    0, 0, 1, 0, 3, 2, 2, 2, 0, 0, 0, 0, 1, 1, 1, 1,
            };

//    if (!tilemap.load("../mario-tile-map.png", sf::Vector2u(32, 32), level, 16, 8)){
    if (!tilemap.load("../mario-tile-map.png", sf::Vector2u(17, 17), 100, 100)){
        return -1;
    }

    // Boucle infinie, principale, du jeu
//    input.gestionInputs(window);
//    window.clear();

    while (window.isOpen())
    {
//        /** GESTION DES INPUTS (CLAVIER, JOYSTICK) **/
            input.gestionInputs(window);

//
//        /** DESSIN - DRAW **/
//        //On efface l'écran et on l'affiche
        window.clear();
////            Map map(1, texture, window);



        window.draw(tilemap);
        window.display();
    }

// On quitte
    return 0;
}