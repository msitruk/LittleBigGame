//
// Created by maxime on 03/08/17.
//

#ifndef LITTLEBIGGAME_IOBSERVABLE_HH
#define LITTLEBIGGAME_IOBSERVABLE_HH

#include "IObserver.hh"
#include <list>

class IObserver;
class IObservable {
private:
    std::list<IObserver *> observers;
protected:
    void NotifyAll() {
        for (std::list<IObserver *>::iterator it=IObservable::observers.begin(); it != IObservable::observers.end(); ++it) {
            (*it)->Notify(this);
        }
    }
public:
    IObservable() {}
    virtual ~IObservable() {}
    void AddObserver(IObserver *observer) {
        this->observers.push_back(observer);
    }
    void RemoveObserver(IObserver *observer) {
        this->observers.remove(observer);
    }
};

#endif //LITTLEBIGGAME_IOBSERVABLE_HH


