//
// Created by maxime on 19/10/17.
//

#ifndef LITTLEBIGGAME_GAMEENGINE_HH
#define LITTLEBIGGAME_GAMEENGINE_HH


#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "../Models/TileMap.hh"
#include "../Models/PlayerSprite.hh"

using namespace std;
using namespace sf;

class GameEngine {

private:
    int GameStatus;
    static GameEngine *gameEngine;

public:

    GameEngine();
    ~GameEngine();
    void Game();
    int GetGameStatus();

    void SetGameStatus(int);

    static GameEngine *getInstance();

};


#endif //LITTLEBIGGAME_GAMEENGINE_HH
