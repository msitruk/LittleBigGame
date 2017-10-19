//
// Created by maxime on 03/08/17.
//

#ifndef LITTLEBIGGAME_IOBSERVER_HH
#define LITTLEBIGGAME_IOBSERVER_HH
#include "IObservable.hh"

class IObservable;
class IObserver {
public:
    IObserver() {};
    virtual ~IObserver() {};
    virtual void Notify(IObservable*) = 0;
};


#endif //LITTLEBIGGAME_IOBSERVER_HH
