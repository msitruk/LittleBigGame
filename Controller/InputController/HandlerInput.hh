//
// Created by maxime on 19/10/17.
//

#ifndef LITTLEBIGGAME_HANDLERINPUT_HH
#define LITTLEBIGGAME_HANDLERINPUT_HH

#include "Input.hh"
#include <SFML/Graphics.hpp>

using namespace sf;

class HandlerInput {
    //pointer Base class Input type that will save all subscribers (Dervied Classes references)  like left,right,up,down

private:

    static HandlerInput *_instance;

public:

    static HandlerInput *getInstance();

    //Constructor
    HandlerInput();

};


#endif //LITTLEBIGGAME_HANDLERINPUT_HH
