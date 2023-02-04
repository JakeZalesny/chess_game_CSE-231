#pragma once
#include "uiInteract.h"   // for Interface
#include "uiDraw.h"		  // for draw*
#include "point.h"
#include "position.h"
#include "board.h"
#include "position.h"
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

class Piece {
public:
	Piece(int r, int c, bool white);
	virtual ~Piece(int r, int c, bool white) {};
	void assign(Position pos);
	void assignPiece(Position pos);
	bool isWhite();
	bool isMove(); 
	int getNMoves();
	bool justMoved(); 
	virtual char getLetter();
	virtual void display(); 
	virtual getMoves(Board board);
	ogstream gout;
	bool move();
	virtual Position position;
protected: 
	Position position; 
	bool fWhite; 
	int nMoves; 
	int lastMove; 

};