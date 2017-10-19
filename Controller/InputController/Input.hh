//
// Created by maxime on 19/10/17.
//

#ifndef LITTLEBIGGAME_INPUT_HH
#define LITTLEBIGGAME_INPUT_HH


#include<iostream>
using namespace std;
class Input {

public:
    virtual void ReceiveEventFromHanlder(std::string direction);
};


#endif //LITTLEBIGGAME_INPUT_HH
