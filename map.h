//
// Created by maxime on 18/08/17.
//

#ifndef LITTLEBIGGAME_MAP_H
#define LITTLEBIGGAME_MAP_H


#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>


class Map
{
public:

//Constructeur
    Map();

//Fonctions
    void drawBackground(sf::RenderWindow &window);


private:
//Variables de la classe en accès privé

//Background
    sf::Texture backgroundTexture;
    sf::Sprite background;

};


#endif //LITTLEBIGGAME_MAP_H
