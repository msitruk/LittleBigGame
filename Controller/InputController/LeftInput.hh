//
// Created by maxime on 19/10/17.
//

#ifndef LITTLEBIGGAME_LEFTINPUT_HH
#define LITTLEBIGGAME_LEFTINPUT_HH

#include<iostream>

#include "Input.hh"

using namespace std;
class LeftInput :public Input{

public:
    virtual void ReceiveEventFromHanlder(std::string direction);
};


#endif //LITTLEBIGGAME_LEFTINPUT_HH
