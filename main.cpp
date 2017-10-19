#include "main.h"

int main(int argc, char *argv[])
{
    GameEngine *gameEngine = GameEngine::getInstance();

    gameEngine->Game();

    return 0;
}