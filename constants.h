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

class Constants {
public: 
    Piece piece[8][8] = {
      Rook(0, 0, true), Knight(0, 1, true), Bishop(0, 2, true), Queen(0, 3, true), King(0, 4, true), Bishop(0, 5, true), Knight(0, 6, true), Rook(0, 7, true),
      Pawn(1, 0, true), Pawn(1, 1, true), Pawn(1, 2, true), Pawn(1, 3, true), Pawn(1, 4, true), Pawn(1, 5, true), Pawn(1, 6, true), Pawn(1, 7, true),
      Space(2, 0, true), Space(2, 1, false), Space(2, 2, true), Space(2, 3, false), Space(2, 4, true), Space(2, 5, false), Space(2, 6,true), Space(2, 7, false),
      Space(3, 0, true), Space(3, 1, false), Space(3, 2, true), Space(3, 3, false), Space(3, 4, true), Space(3, 5, false), Space(3, 6,true), Space(3, 7, false),
      Space(4, 0, true), Space(4, 1, false), Space(4, 2, true), Space(4, 3, false), Space(4, 4, true), Space(4, 5, false), Space(4, 6,true), Space(4, 7, false),
      Space(5, 0, true), Space(5, 1, false), Space(5, 2, true), Space(5, 3, false), Space(5, 4, true), Space(5, 5, false), Space(5, 6,true), Space(5, 7, false),
      // ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
      Pawn(6, 0, false), Pawn(6, 1, false), Pawn(6, 2, false), Pawn(6, 3, false), Pawn(6, 4, false), Pawn(6, 5, false), Pawn(6, 6, false), Pawn(6, 7, false),
      Rook(7, 0, false), Knight(7, 1, false), Bishop(7, 2, false), Queen(7, 3, false), King(7, 4, false), Bishop(7, 5, false), Knight(7, 6, false), Rook(7, 7, false)
    };
};