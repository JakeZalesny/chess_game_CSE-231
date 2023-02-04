#pragma once
#include "uiInteract.h"   // for Interface
#include "uiDraw.h"		  // for draw*
#include "point.h"
#include "piece.h"
#include "pawn.h"
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
#include <list>
using namespace std;

Pawn::Pawn(int r, int c, bool white) : possibleMoves(), movesMade(0), row(r), col(c), isCaptured(false), newWhite(white) {}


pair<int, int>* Pawn::getPossibleMoves() {
	return *possibleMoves; 
}

pair<int, int> Pawn::currentPosition() {
	return make_pair(row, col);
}

void Pawn::setCaptured() {
	isCaptured = true; 
}

bool Pawn::isValidMove(int r, int c) {
	definePossibleMoves();
	pair<int, int>* possible = getPossibleMoves();
	for (int i = 0; *possible[i]; i++) {
		if (row + *possible[i].first == r && col + *possible[i].second == c)
			return true; 
	}
	return false; 
}

void Pawn::move(Piece board[][8], int selectedPosition) {
	int newRow = selectedPosition / 8; 
	int newCol = selectedPosition % 8; 
	if (isValidMove(newRow, newCol)) {
		board[newRow][newCol] = new Pawn(newRow, newCol, newWhite);
	}
}