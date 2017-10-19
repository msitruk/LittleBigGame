//
// Created by maxime on 01/08/17.
//

#ifndef LITTLEBIGGAME_CHARACTER_HH
#include "AbstractEntity.hh"
#include "IObservable.hh"

#define LITTLEBIGGAME_CHARACTER_HH

//Ajout de deux double pour la position, pouvant être manipulés à travers double GetX(), void SetX(double), double GetY(), void SetY(double)
//Ajout d?un int pour la vie pouvant être manipulé à travers int GetLife(), void SetLife(int)

class Character : public AbstractEntity, public IObservable {

protected:
    double X;
    double Y;
    int life;

public:
    Character();
    virtual ~Character() = 0;
    double GetX() const;
    double GetY() const;
    int GetLife() const;
    void SetX(double value);
    void SetY(double value);
    void SetLife(int value);

};


#endif //LITTLEBIGGAME_CHARACTER_HH
