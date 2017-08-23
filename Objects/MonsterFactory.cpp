//
// Created by maxime on 03/08/17.
//

#include "MonsterFactory.hh"
#include "ZombieMonster.hh"
#include "SprinterMonster.hh"
#include <iostream>
using namespace std;

Character* MonsterFactory::Create(const std::string& string){

    Character *character = nullptr;

    if(string == "ZombieMonster"){
        character =  new ZombieMonster;
    }
    else if(string == "SprinterMonster") {
        character = new SprinterMonster();
    }

    return character;
}
