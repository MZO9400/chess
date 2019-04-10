#include <iostream>

#include "Rook.h"

Rook::Rook(const Position& pos, const ChessPieceColor& color) {
    mPiecePosition = pos;
    mPieceType = ChessPieceType::Rook;
    mPieceColor = color;
}

Rook::~Rook() {
    //dtor
}

bool Rook::m_isChessMoveAllowed(const Position& pos,
                                const ChessBoard& board) const {
    if (m_isMovingStraight(pos) && board.isValidMove(pos) &&
            !(mPiecePosition == pos)) {
        return true;
    }

    return false;
}
