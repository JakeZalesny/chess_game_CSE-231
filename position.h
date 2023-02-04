#pragma once
#include "uiInteract.h"   // for Interface
#include "uiDraw.h"		  // for draw*
#include "point.h"
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

class Position {
private: 
	char location; 
	double squareWidth; 
	double squareHeight; 
public: 
	Position(); 
	int getLocation(); 
	int getRow(); 
	int getColumn(); 
	int getX(); 
	int getY(); 
	bool isValid(); 
	void setRow(int r);
	void setCol(int c);
	void set(int r, int c);
	void adjustRow(int dRow);
	void adjustCol(int dCol);
	//override ==, =, +, <<, and >>
};
