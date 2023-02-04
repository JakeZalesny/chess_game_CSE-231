#pragma once
#include "uiInteract.h"   // for Interface
#include "uiDraw.h"		  // for draw*
#include "point.h"
#include "piece.h"
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

class Queen : public Piece {
public:
	Queen(int r, int c, bool white) : Piece(r, c, white);
	virtual char getLetter() override;
	bool isWhite() override; 
	bool isMove() override;
	int getNMoves() override;
	bool justMoved() override;
	virtual void display() override;
	virtual getMoves(Board board);
	ogstream gout;
	bool move();

};