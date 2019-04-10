#pragma once
#ifndef ENUMS_H
#define ENUMS_H

enum class ChessPieceType {
    None = 'X',
    Pawn = 'P',
    Knight = 'K',
    Bishop = 'B',
    Rook = 'R',
    Queen = 'Q',
    King = 'G'
};

enum class ChessPieceColor {
    Black = 0,
    White = 1
};

#endif // ENUMS_H
