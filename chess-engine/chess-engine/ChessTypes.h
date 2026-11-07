#pragma once
#include <cstdint>

enum Color {
	White = 0,
	Black = 1
};

enum PieceType {
	None = 0,
	Pawn = 1,
	Knight = 2,
	Bishop = 3,
	Rook = 4,
	Queen = 5,
	King = 6
};

enum CastlingRights {
	White_KingSide = 1,
	White_QueenSide = 2,
	Black_KingSide = 4,
	Black_QueenSide = 8
};

using Bitboard = uint64_t; // 64-bit integer representing the chessboard (Type Alias)
using Square = int; // 0-63
constexpr Square NoSquare = -1; // Represents an invalid square (there is no exist en passant square)
