#pragma once
#include "uiInteract.h"   // for Interface
#include "uiDraw.h"		  // for draw*
#include "point.h"
#include "piece.h"
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
#include <list>
using namespace std;

class Pawn :public Piece {
public: 
	Pawn(int r, int c, bool white) : Piece(r, c, white);
	void definePossibleMoves();
	pair<int, int> currentPosition(); 
	void move(Piece board[][8], int selectedPosition);
	pair<int, int>* getPossibleMoves(); 
	void setCaptured(); 
	void checkEnPassant();
	void handleMovement();
	bool isValidMove(int r, int c); 

private: 
	pair<int, int>[4] possibleMoves = {
		make_pair(0, 1),
		make_pair(0, 2),
		make_pair(1, 1),
		make_pair(1, -1),
		make_pair(2, 0)
	};

	int movesMade; 
	int row; 
	int col;
	bool isCaptured; 
	bool newWhite;
};