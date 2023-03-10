//
// Created by 27293 on 2023/3/9.
//

#ifndef UNTITLED1_LED_H
#define UNTITLED1_LED_H

#include <Arduino.h>

class led {
public:
    led();
    ~led();

    void on();
    void off();

private:
    int ledPin = 11;

};


#endif //UNTITLED1_LED_H
