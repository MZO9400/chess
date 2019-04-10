#include <iostream>

#include "Bishop.h"

Bishop::Bishop(const Position& pos, const ChessPieceColor& color) {
    mPiecePosition = pos;
    mPieceType = ChessPieceType::Bishop;
    mPieceColor = color;
}

Bishop::~Bishop() {
    //dtor
}

bool Bishop::m_isChessMoveAllowed(const Position& pos,
                                  const ChessBoard& board) const {
    if (m_isMovingDiagonal(pos) && board.isValidMove(pos) &&
            !(mPiecePosition == pos)) {
        return true;
    }

    return false;
}
