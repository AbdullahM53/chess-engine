#pragma once
#include "ChessTypes.h"
#include <iostream>

class Board {

private:
	Bitboard byColor[2];
	Bitboard byType[7];
	Color sideToMove;
	uint8_t castlingRights;
	Square enPassantSquare;
	int halfmoveClock;
	int fullmoveNumber;

public:
	Board() {};

	void clear() {};

	void print() {};


	Color getSideToMove();
};