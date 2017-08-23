//
// Created by maxime on 02/08/17.
//

#include "SprinterMonster.hh"
#include <iostream>
#include "TimeManager.hh"
using namespace std;

SprinterMonster::SprinterMonster(){
    this->life = 25;
    this->SetX(0);
    this->SetY(0);
}

void SprinterMonster::Update(){
    //La méthode void Update() incrémente X et Y de 5 par seconde (Vous DEVEZ utiliser votre TimeManager)
    //Vous devez uniquement vous soucier d'implémenter les méthode Update des classes SprinterMonster et ZombieMonster pour cette étape.
    //Un incrémentation de 1 par seconde (pour le zombie par exemple) singnifie que si le délais entre deux appels à Update est de 500 millisecondes, le déplacement sera de 0.5.
    TimeManager& timer=TimeManager::GetInstance();
    this->SetX(this->GetX() + ( timer.GetElapsedTime() * 0.005));
    this->SetY(this->GetY() + ( timer.GetElapsedTime() * 0.005));
}