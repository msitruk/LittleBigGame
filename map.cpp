//
// Created by maxime on 18/08/17.
//

#include "map.h"

using namespace std;
using namespace sf;

//Constructeur
Map::TileMap()
{
//Chargement des ressources graphiques
//Chargement du background
    if (!backgroundTexture.loadFromFile("../graphics/background.png"))
    {
// Erreur
        cout << "Erreur durant le chargement de l'image de background." << endl;
    }
    else
        background.setTexture(backgroundTexture);
}


//Fonctions

void Map::drawBackground(RenderWindow &window)
{
    window.draw(background);
}