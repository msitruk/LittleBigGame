//
// Created by maxime on 01/08/17.
//
#include <chrono>

#ifndef LITTLEBIGGAME_TIMEMANAGER_HH
#define LITTLEBIGGAME_TIMEMANAGER_HH

class TimeManager{


public:
    //Static pour Singleton ??
    static TimeManager& GetInstance();

    //Attributes

    //Methods
    void Start();
    void Update();
    unsigned int GetElapsedTime() const;
    unsigned int GetStartedTime() const;

private:
    //Attributes
    std::chrono::time_point<std::chrono::system_clock> start, prev_update, update;

    //Surcharge =
    TimeManager& operator= (const TimeManager&);

    //Constructor ?
    TimeManager (const TimeManager&){}

    //Static pour Singleton ???
    static TimeManager m_instance;

    //Constructor ?
    TimeManager();

    //Destructor ?
    ~TimeManager();

};

#endif //LITTLEBIGGAME_TIMEMANAGER_HH
