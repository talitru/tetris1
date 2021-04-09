//#include "io_utils.h"
#include "Figure.h"
#include"Point.h"
#include <conio.h>
#include"TheGame.h"

using namespace std;
   
// הפןנקציה ChooseOption() כשקראתי לה מהמיין לפעמים זה עשה בעיות ריצה ולפעמים לא אני לא יודעת למה 
// אז עשיתי את כל הבחירות מקשים של התפריט בתוך פונצייה RUNGAME


int main()
{
	
	TheGame Game;
	Game.RunGame();

	//char menuKeyPressed = 0;
	//bool isPressed = false;
	//while (!isPressed)
	//{
	//	if (_kbhit())
	//	{
	//		menuKeyPressed = _getch();

	//		if (menuKeyPressed == INSTRUCTIO_KEYS)
	//			Game.ShowInstructions();
	//		else if (menuKeyPressed == START)//TODO
	//		{

	//			Game.StartGame();
	//			isPressed = true;
	//		}
	//	}
	//}
	//
	 
	return 0;
}
