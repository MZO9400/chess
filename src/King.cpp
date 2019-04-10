#include <iostream>

#include "King.h"

King::King(const Position& pos, const ChessPieceColor& color) {
    mPiecePosition = pos;
    mPieceType = ChessPieceType::King;
    mPieceColor = color;
}

King::~King() {
    //dtor
}

bool King::m_isChessMoveAllowed(const Position& pos,
                                const ChessBoard& board) const {
    if (board.isValidMove(pos) && (abs(m_advancerate(pos).x) == 1 ||
                                   abs(m_advancerate(pos).y) == 1)) {
        return true;
    }

    return false;
}
