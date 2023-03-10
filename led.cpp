//
// Created by 27293 on 2023/3/9.
//
#include <Arduino.h>
#include "led.h"

led::led() {
    pinMode(ledPin, OUTPUT);
}

void led::on() {
    digitalWrite(ledPin, HIGH);

}

void led::off() {
    digitalWrite(ledPin, LOW);

}
led::~led() {

}