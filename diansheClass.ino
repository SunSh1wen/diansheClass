/*
 Name:		diansheClass.ino
 Created:	2023/3/10 16:21:07
 Author:	27293
*/

#include "shumaguan.h"

void setup() {
    // write your initialization code here
    shumaguan mySMG(1);
    for (int i = 0; i < sizeof(mySMG.pinOut); i++)
    {
        pinMode(mySMG.pinOut[i], OUTPUT);
    }
}

void loop() {
    // write your code here
    shumaguan mySMG(1);
    for (int i = 0; i < 10; i++)
    {
        mySMG.showNumber(i);
        delay(1000);
    }



}