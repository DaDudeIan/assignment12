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
    time += 1;
} //e

void Clock::tick(int dt) {
    assert(dt >= 0);
    time += dt;
} //f

void Clock::setAlarm(int t) {
    assert(t >= 0);

    alarm = t;
    alarmHasBeenSet = true;
} //g