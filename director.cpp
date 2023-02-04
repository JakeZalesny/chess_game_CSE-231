#pragma once
#include "uiInteract.h"   // for Interface
#include "uiDraw.h"		  // for draw*
#include "point.h"
#include "piece.h"
#include "move.h"
#include "space.h"
#include "queen.h"
#include "king.h"
#include "pawn.h"
#include "bishop.h"
#include "knight.h"
#include "rook.h"
#include "director.h"
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

Director::Director() {}

void Director::runGame() {
	ogstream gout; 
	Board* pBoard = new Board(); 
	pBoard->initBoard(); 
	Piece* board = pBoard->getBoard(); 
	//figure out how to get hover and select!
	pBoard->display(Position posHover, Position posSelect);
	int i = 0; 
	for each (Piece * var in board)
	{
		switch (var->getLetter())
		{
		case 'p':
			gout.drawPawn(i, !var->isWhite()); 
			i++; 
			break; 
		
		case 'P':
			gout.drawPawn(i, !var->isWhite());
			i++;
			break;
		
		case 'k':
			gout.drawKing(i, !var->isWhite());
			i++;
			break;
		
		case 'K':
			gout.drawPawn(i, !var->isWhite());
			i++;
			break;
		
		case 'q': 
			gout.drawQueen(i, !var->isWhite());
			i++; 
			break; 
		
		case 'Q':
			gout.drawQueen(i, !var->isWhite());
			i++; 
			break; 
		
		case 'n':
			gout.drawKnight(i, !var->isWhite());
			i++; 
			break; 
		
		case 'N':
			gout.drawKnight(i, !var->isWhite());
			i++; 
			break; 
		case 'B':
			gout.drawBishop(i, !var->isWhite());
			i++; 
			break; 
		
		case 'b':
			gout.drawBishop(i, !var->isWhite());
			i++; 
			break; 
		
		case 'r':
			gout.drawRook(i, !var->isWhite());
			i++; 
			break; 
		
		case 'R':
			gout.drawRook(i, !var->isWhite());
			i++; 
			break; 
		default:
			i++; 
			break;
		}
	}
}