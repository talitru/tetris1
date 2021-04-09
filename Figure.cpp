#include "Figure.h"

void Figure::Rotate()
{
	//if(direction=='w')
	// אם המשתמש הכניס למעלה- הצורה מסתובבת, בשאר הכיוונים נשארת אותו דבר
}
void Figure::RightOrLeftOrdown()
{

}void Figure::printFigure(int x,int y)// (*p)++
{
	switch (serial_num_of_figure) //1-7
	{
	case SHAPES::Line:
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (FigureBody[i].getIsBusy())
			{
				gotoxy(FigureBody[i].getX(), FigureBody[i].gety());
				cout << '#';
			}
			/*else
			{
				gotoxy(FigureBody[i].getX(), FigureBody[i].gety());
				cout << ' ';
			}*/
		}
	}

	
	}
	//for (int i = 0; i < SIZE-2; i++)
	//{
	//	for (int j = 0; j < SIZE; j++)
	//	{
	//		if ((FigureBody[i][j] == 1))
	//		{
	//			//לעדכן את הלוח בנקודה שזה תפוס
	//			//gotoxy((*p).getX(), (*p).gety());
	//			cout << '#';
	//			
	//			//(*p).SetIsBusy(true);//צריך עידכון לgetIsBusy
	//			
	//			//x++;
	//		}
	//		else //   אולי כדאי לעדכן את הנקודות שהודפסו בהן סולמיות כתפוסות ולהוסיף באלס תנאי &&figureBody[p.getX][p.getY] != 0) 
	//		{

	//			cout << ' ';
	//		}
	//	}
	//	
	//	gotoxy(x, y + 1);
	//}
	//cout << endl;
}

void Figure::initFigureBySerialNum(int x,int y)
{

	switch (serial_num_of_figure) //1-7
	{
	case SHAPES::Line:
	{
		 
		for (int j = 0; j < SIZE; j++)
		{
			FigureBody[j].SetPoint(x + j, y, true, '#');

		}
		break;

	}

	case SHAPES::L:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x, y + 1, true, '#');
		FigureBody[2].SetPoint(x + 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 2, y + 1, true, '#');

		break;
	}
	case SHAPES::RL://reversed L
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x, y + 1, true, '#');
		FigureBody[2].SetPoint(x - 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x - 2, y + 1, true, '#');
		
		break;
	}
	case SHAPES::Square:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x+1, y, true, '#');
		FigureBody[2].SetPoint(x , y + 1, true, '#');
		FigureBody[3].SetPoint(x +1, y + 1, true, '#');

		break;
	}
	case SHAPES::Z:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x+1, y, true, '#');
		FigureBody[2].SetPoint(x+1, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 2, y + 1, true, '#');

		break;
	}


	case SHAPES::RZ://reversed Z
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x+1, y, true, '#');
		FigureBody[2].SetPoint(x , y + 1, true, '#');
		FigureBody[3].SetPoint(x - 1, y + 1, true, '#');

		break;
	}

	case SHAPES::Plus :
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x, y + 1, true, '#');
		FigureBody[2].SetPoint(x - 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 1, y + 1, true, '#');

		break;
	}

}
	
}


