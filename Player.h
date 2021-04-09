#pragma once
#include "Board.h"


class Player
{
	int serialPlayerNum;


public:
	Player(); //ctor
	void SetSerialNum(int num)
	{
		serialPlayerNum = num;
	}

	void moveLeft();
	void moveRight();
	void RotateLeft();
	void RotateRight();
	
};
