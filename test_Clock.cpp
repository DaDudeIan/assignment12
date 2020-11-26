#include "Clock.hpp"
#include <cassert> //c++ equivalent of assert.h
#include <iostream> //c++ equivalent of stdio.h
#include <stdbool.h>

int main() {
    /*=======================Test standard tick=============================*/
    Clock a; //time 0
    Clock b(20); //time 20

    std::cout << std::to_string(a.getTime()) << std::endl; //std::to_string used as explicit int to str converter
    std::cout << std::to_string(b.getTime()) << std::endl;

    a.tick();
    b.tick();

    std::cout << std::to_string(a.getTime()) << std::endl;
    std::cout << std::to_string(b.getTime()) << std::endl;

    /*=======================Test specified tick=============================*/
    Clock c; //time 0
    Clock d(11); //time 11

    std::cout << std::to_string(c.getTime()) << std::endl;
    std::cout << std::to_string(d.getTime()) << std::endl;

    c.tick(5);
    d.tick(10);

    std::cout << std::to_string(c.getTime()) << std::endl;
    std::cout << std::to_string(d.getTime()) << std::endl;

    /*====================================================*/
    Clock e;

    int x;
    std::cin >> x;
    e.setAlarm(x);

    e.tick(10);

    /*====================================================*/
    Clock i(10);

    i.setAlarm(5);

    i.tick(10);
    
    return 0;
}