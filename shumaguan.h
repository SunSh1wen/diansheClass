#pragma once

#include <Arduino.h>

class shumaguan
{
public:

	int num[10][8] = {
		//a b c d e f g dp
		{1, 1, 1, 1, 1, 1, 0, 0}, //0
		{0, 1, 1, 0, 0, 0, 0, 0}, //1
		{1, 1, 0, 1, 1, 0, 1, 0}, //2
		{1, 1, 1, 1, 0, 0, 1, 0}, //3
		{0, 1, 1, 0, 0, 1, 1, 0}, //4
		{1, 0, 1, 1, 0, 1, 1, 0}, //5
		{1, 0, 1, 1, 1, 1, 1, 0}, //6
		{1, 1, 1, 0, 0, 0, 0, 0}, //7
		{1, 1, 1, 1, 1, 1, 1, 0}, //8
		{1, 1, 1, 1, 0, 1, 1, 0}, //9
	};
	shumaguan(int unitNum);
	void showNumber(int a);
	void display(int a, int ctrlPin[]);

	void off();
	void setPin(int array[],int len);

//private:
	int pinOut[8] = {2,3,4,5,6,7,8,9};
	int unitNum = 1;


};

