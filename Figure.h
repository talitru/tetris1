#pragma once
#include "Board.h"
#include <iostream>

enum SHAPES { Line = 0, L = 1, RL = 2, Square = 3, Z = 4, RZ =5, Plus = 6 };//RT=reversed T=  *
																	 //=          *** 
enum startValue {X1=5, Y1 = 1, X2 = 18, Y2 = 1};
class Figure                                        
{
	
	enum { SIZE = 4 };
	Point FigureBody[SIZE]; //7 figures ****  **   *       *     **     *     **
	////////////////////////////////// **   ***   ***    **     ***     **
	char direction;
	int serial_num_of_figure=0;
	
	
public:
	 
	Board board;
	////ctor
	Figure()
	{
		initFigureBySerialNum(X1, Y1);
		initFigureBySerialNum(X2, Y2);

	};
	void SetSerialNum(int num) { serial_num_of_figure = num; };
	int GetSerialNum() const { return serial_num_of_figure; };
	void initFigureBySerialNum(int x,int y);
	void printFigure(int x,int y);
	//void deleteFigure();
	void Rotate();//Rotate is up- kbhit בלחיצה ימינה אני צריכה להזיז את הקורדינטות ימינה
	void RightOrLeftOrdown();
	
	

};