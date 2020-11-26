#include <cassert> //c++ equivalent of assert.h
#include <iostream> //c++ equivalent of stdio.h
#include <stdbool.h>

#include "Clock.hpp"

int Clock::getTime() const{ //const says it won't be changing
    return time;
} //a

Clock::Clock() : time(0) { //default if constructor is called without arguments
} //b

Clock::Clock(int t) {
    assert(t >= 0);
    time = t;
} //c

void Clock::tick(){
    checkAndUpdateAlarm();
    time += 1;
} //e

void Clock::tick(int dt) {
    assert(dt >= 0);
    checkAndUpdateAlarm();
    time += dt;
} //f & g

void Clock::setAlarm(int t) {
    assert(t >= 0);
    //assert(t > time);

    alarm = t;
    alarmHasBeenSet = true;
} //g & h

void Clock::checkAndUpdateAlarm(){
    if (alarm <= time) {
        std::cout << "Time has passed!" << std::endl;
        alarm = 0;
        alarmHasBeenSet = false;
    }
} //i