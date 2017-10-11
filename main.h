//
// Created by maxime on 18/08/17.
//

#ifndef LITTLEBIGGAME_MAIN_H
#define LITTLEBIGGAME_MAIN_H

#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>
#include <SFML/Graphics.hpp>

#include "input.h"
#include "Objects/TileMap.hh"
#include "Objects/PlayerSprite.hh"

using namespace std;
using namespace sf;

// Taille de la fenêtre : 800x480 pixels
sf::Vector2i screenDimensions(800,480);
//const int SCREEN_WIDTH = 800;
//const int SCREEN_HEIGHT = 480;

#endif //LITTLEBIGGAME_MAIN_H
