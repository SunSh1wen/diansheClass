#include "shumaguan.h"


shumaguan::shumaguan(int unitNum) {
	this->unitNum = unitNum;
}


void shumaguan::showNumber(int a)
{
	for (int i = 0; i < sizeof(this->pinOut) ; i++)
	{
		digitalWrite(this->pinOut[i], this->num[a][i]);
	}
}

void shumaguan::display(int a, int ctrlPin[])
{
	int arr[5];

	arr[4] = a / 10000;
	arr[3] = (a - arr[4]*10000) / 1000;
	arr[2] = (a - arr[4]*10000 -arr[3]*1000) / 100;
	arr[1] = (a - arr[4] * 10000 - arr[3] * 1000 - arr[2]*100) / 10;
	arr[0] = a % 10;

	//先拉高电平，全不通
	for (int k = 0; k < this->unitNum; k++)
	{
		digitalWrite(ctrlPin[k], HIGH);
	}

	for (int j = 0; j < this->unitNum; j++)
	{
		digitalWrite(ctrlPin[j], LOW);
		showNumber(arr[j]);
		delay(10);
		digitalWrite(ctrlPin[j], HIGH);
	}

}

void shumaguan::off(){

	for (int i = 0; i< sizeof(this->pinOut); i++)
	{
		digitalWrite(this->pinOut[i], LOW);
	}
}

void shumaguan::setPin(int array[], int len)
{
	for(int i = 0; i< sizeof(this->pinOut); i++)
	{
		this->pinOut[i] = array[i];
	}
}

