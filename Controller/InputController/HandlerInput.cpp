//
// Created by maxime on 19/10/17.
//

#include "HandlerInput.hh"
#include "RightInput.hh"
#include "LeftInput.hh"

HandlerInput *HandlerInput::_instance = new HandlerInput();

Input *p[4];

HandlerInput* HandlerInput::getInstance(){
    return _instance;
}

HandlerInput::HandlerInput(){
}
