#pragma once
#include "uiInteract.h"   // for Interface
#include "uiDraw.h"		  // for draw*
#include "point.h"
#include "piece.h"
#include "move.h"
#include "constants.h"
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

class Board {
private:
	Piece board[64]; 
	int currentMove; 
	ogstream gout; 
	Constants con; 
public: 
	Board();
	void initBoard();
	int getCurrentMove();
	bool whiteTum(); 
	void display(Position posHover, Position posSelect);
	Piece getPiece(Position pos);
	void free(); 
	void reset();
	Piece* getBoard();
	void move(Move move);
	void assign(Piece piece);
	void swap(Position pos1, Position pos2);
	assertBoard();
};