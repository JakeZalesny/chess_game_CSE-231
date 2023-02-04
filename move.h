#pragma once
#include "uiInteract.h"   // for Interface
#include "uiDraw.h"		  // for draw*
#include "point.h"
#include "piece.h"
#include "position.h"
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

class Move {
private: 
	Position source; 
	bool destination; 
	char piece; 
	char capture;
	bool enPassant; 
	bool castleK; 
	bool castleQ; 
	bool isWhite; 
	string error; 
public: 
	Move(); 
	string getText(); 
	Position getSRC(); 
	Position getDest(); 
	char getPromotion(); 
	char getCapture(); 
	bool getEnPassant(); 
	bool getCastleK(); 
	bool getCastleQ(); 
	bool getWhiteMove(); 
	void setEnPassant(); 
	void setCastleK(); 
	void setCastleQ(); 
	void setWhiteMove(); 
	void assign(Move move);
	void assign(string string);
	// overload << and >>
};