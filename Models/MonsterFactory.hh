//
// Created by maxime on 03/08/17.
//

#ifndef LITTLEBIGGAME_MONSTERFACTORY_HH
#define LITTLEBIGGAME_MONSTERFACTORY_HH

#include <iostream>
#include "Character.hh"

class MonsterFactory {


public:
    Character* Create(const std::string& string);

};


#endif //LITTLEBIGGAME_MONSTERFACTORY_HH
