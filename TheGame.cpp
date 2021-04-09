
#include "TheGame.h"
#include "Board.h"
#include "Figure.h"
#include <conio.h>
#include <iostream>

char LeftPlayerKeys[10] = { 'a','A','d','D','s','S','w','W','x','X'};
char RightPlayerKeys[10] = { 'j','J','l','L','k','K','i','I','m','M' };


void TheGame::RunGame()//TODO- àîåø ìäéåú îåãôñ ìåç åìäúçéì îùç÷
{
	char key_char=0;
	int x1 = 5;//(COLS/ 2)-1;
	int y1 = 1;
	int x2 = 18;//(COLS + 2+(COLS/2)-1);
	int y2 = 1;

	while (key_char!=EXIT&&key_char!=ESC)
	{

		if (_kbhit())
		{

			key_char = _getch();
			if (key_char== INSTRUCTIO_KEYS)
			{
			   ShowInstructions();
			}
			else if (key_char == START)
			{
				//int rand1, rand2;
				randFigure();
				
				while(key_char != EXIT && key_char != ESC)
				{
					gotoxy(x1, y1);

					f.printFigure (x1, y1);  //אמור להדפיס את הצןרה הראשונה בלוח אחד
					Sleep(200);

					
					if ((y2 < ROWS) && y2 != 1)
					{
						gotoxy(14, y2 - 1);
						cout << "            ";
					}
					gotoxy(x2, y2);  //ובלוח השני
					
					f.printFigure (x2,y2);
					Sleep(200);

					if (y1 < ROWS - 1)
					{
						gotoxy(1, y1);
						cout << "            ";
					}


					y1++;
					y2++;

					if ((y1 > ROWS - 1) || (y2 > ROWS - 1))
					{
						y1 = y2 = 1;
						randFigure();
						
					}

					if (_kbhit())
					{
						key_char = _getch();
						bool isValidDirection = false;
						for (char i : LeftPlayerKeys)
						{
							if (i == key_char&&!isValidDirection)
							{
								isValidDirection = true;
								MoveFigure(this->GameBoard,key_char,x1,y1);
						
							}
							
						}
						if (!isValidDirection)
						{
							for (char i : RightPlayerKeys)
							{
								if (i == key_char&&!isValidDirection)
								{
									isValidDirection = true;
									MoveFigure(key_char,x2,y2);

								}

							}
						}

					}



				}//מסתיים while פנימי

			} //איזה מקש הוקש?

		} // האם הוקש מקש?

	} //מסתיים while חיצוני

	
}

void TheGame::MoveFigure(Board& board,char direction,int& x, int& y ) // קוראת לפונקציות תזוזה לפי המקשים
{
	if (direction == 'A' || direction == 'a')
	{
		--x;
	}
	else if (direction == 'D' || direction == 'd')
	{
		++x;
	}
	
	else if (direction == 'J' || direction == 'j')
	{
		--x;
	}
	else if (direction == 'L' || direction == 'l')
	{
		++x;
	}
	else if (direction == 'K' || direction == 'k')
	{
		//RPlayer_rotateRight();
	}
	else if (direction == 'I' || direction == 'i')
	{
		//RPlayer_rotateLeft();
	}
	else if (direction == 'L' || direction == 'l')
	{
		//LPlayer_rotateLeft(); 
	}
}


int TheGame::randFigure()
{
	int randFigure= rand() % RAND; //0-6
	switch (randFigure)
	{
	case 0:
	{
		Figure line;

		line.SetSerialNum(SHAPES::Line);
		
		
		break;

	}
	case 1:
	{
		Figure L1;
		L1.SetSerialNum(SHAPES::L);
	
		break;
	}
	case 2:
	{
		Figure RL1;
		RL1.SetSerialNum(SHAPES::RL);
		
		break;
	}
	case 3:
	{
		Figure Square1;
		Square1.SetSerialNum(SHAPES::Square);
	
		
		break;
	}
	case 4:
	{
		Figure RZ1;
		RZ1.SetSerialNum(SHAPES::RZ);
		
		
		break;
	}
	case 5:
	{
		Figure Z1;
		Z1.SetSerialNum(SHAPES::Z);
	
		
		break;
	}
	case 6:
	{
		Figure Plus1;
		Plus1.SetSerialNum(SHAPES::Plus);
		
		break;
	}
	}

	return  randFigure;
}

//moves
//void TheGame::LPlayer_moveLeft()
//{
//
//}
//void TheGame::LPlayer_moveRight()
//{
//
//}
//void TheGame::RPlayer_moveLeft()
//{
//
//}
//void TheGame::RPlayer_moveRight()
//{
//
//}
////rotation
//void TheGame::LPlayer_rotateRight()
//{
//
//}
//void TheGame::LPlayer_rotateLeft()
//{
//
//}
//void TheGame::RPlayer_rotateRight()
//{
//
//}
//void TheGame::RPlayer_rotateLeft()
//{
//
//}


void TheGame::ContinueGame()//TODO- ìäîùéê àú äîùç÷ îäî÷åí ùáå òöøðå
{
	system("cls");
}
void TheGame::ShowInstructions()
{
	std::cout <<endl <<"Goal: You have to make full horizontal lines with the different shaped blocks that fall into the game area.Full lines will then disappear and Increases the chance of winning the game" << endl;
	std::cout << "The player whose board is filled first loses, the other player wins";
	std::cout << "Controls:" << endl << "Player 1(The left player):" << endl << "'a' or 'A' key : move block to the left" << endl << "'d' or 'D' key : move block to the right" << endl << "'s' or 'S' key : rotate block clockwise" << endl << "'w' or 'W' key : rotate block counterclockwise" << endl << "'x' or 'X' key : move block down";
	std::cout << "Controls:" << endl << "Player 2(The right player):" << endl << "'j' or 'J' key : move block to the left" << endl << "'l' or 'L' key : move block to the right" << endl << "'k' or 'K' key : rotate block clockwise" << endl << "'i' or 'I' key : rotate block counterclockwise" << endl << "'m' or 'M' key : move block down"<<endl;
}
void TheGame::ExitGame()
{
	system("cls");//not sure
	

}




//void TheGame::ChooseOption()
//{
//	char menuKeyPressed=0;
//	bool isPressed = false;
//	while (!isPressed)
//	{
//		if (_kbhit())
//		{	
//			menuKeyPressed = _getch();
//
//			if (menuKeyPressed == INSTRUCTIO_KEYS)
//				ShowInstructions();
//			else if (menuKeyPressed == START)//TODO
//			{
//				isPressed = true;
//				StartGame();
//				
//			}
//		}
//	}
//}