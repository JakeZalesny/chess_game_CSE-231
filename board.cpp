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

Board::Board() : board{ }, currentMove{ 0 }, gout{ ogstream }, con{ Constants } {}

void Board::initBoard() {
	board = con.piece; 
}

int Board::getCurrentMove() {
	return currentMove; 
}

bool Board::whiteTum() {
	return true; 
}

void Board::display(Position posHover, Position posSelect) {
	gout.drawBoard(); 
	gout.drawHover(posHover.getLocation()); 
	gout.drawSelected(posSelect.getLocation());

	if (posSelect.isValid()) {
		board[posSelect].getMoves(possible, board);
	}
}

Piece* Board::getBoard() {
	return *board; 
}