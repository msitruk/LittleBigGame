//
// Created by maxime on 01/08/17.
//
#include <iostream>
#include <chrono>
#include "TimeManager.hh"

using namespace std;

TimeManager TimeManager::m_instance=TimeManager();

TimeManager::TimeManager() {
    this->start = std::chrono::system_clock::now();
}

TimeManager::~TimeManager() {
}

TimeManager& TimeManager::GetInstance() {
    return m_instance;
}

void TimeManager::Start() {
    this->start = std::chrono::system_clock::now();
}

void TimeManager::Update(){
    this->prev_update = this->update;
    this->update = std::chrono::system_clock::now();
}

unsigned int TimeManager::GetElapsedTime() const {
    return std::chrono::duration_cast<std::chrono::milliseconds>(this->update-this->prev_update).count();
}

unsigned int TimeManager::GetStartedTime() const {
    return std::chrono::duration_cast<std::chrono::milliseconds>(this->update-this->start).count();
}
