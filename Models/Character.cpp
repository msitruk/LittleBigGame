//
// Created by maxime on 01/08/17.
//

#include "Character.hh"

Character::Character(){

}

Character::~Character(){

}

double Character::GetX() const {
    return X;
}

double Character::GetY() const {
    return Y;
}

int Character::GetLife() const {
    return life;
}

void Character::SetX(double value){
    X = value;
    this->NotifyAll();
}

void Character::SetY(double value){
    Y = value;
    this->NotifyAll();
}
void Character::SetLife(int value){
    life = value;
    this->NotifyAll();
}