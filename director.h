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
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

class Director {
	Director(); 
	void runGame(); 
};
