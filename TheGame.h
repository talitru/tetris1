#pragma once

#include "Board.h"
#include "Figure.h"
#include "Player.h"

enum menuKeys { START = '1', PAUSE = '2', INSTRUCTIO_KEYS = '8', EXIT = '9'};
enum { ESC = 27 };//escape
enum { RAND = 7 };

class TheGame
{
	Board GameBoard;
	Figure f;
public:
	TheGame() {}; //ctor
	void setBoard()
	{
		GameBoard.initBoard();
	}
	int randFigure();

	void RunGame();
	//void ChooseOption();
	void ContinueGame();
	void ShowInstructions();
	void ExitGame();
	void MoveFigure(Board& board,char direction,int& x,int& y);
	//moves and rotation functions -אולי כדאי לשים אותם במחלקת שחקן
	
};