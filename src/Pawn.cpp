#include <iostream>

#include "Pawn.h"
#include <cmath>
Pawn::Pawn(const Position& pos, const ChessPieceColor& color) {
    mPiecePosition = pos;
    mPieceType = ChessPieceType::Pawn;
    mPieceColor = color;
}

Pawn::~Pawn() {
    //dtor
}

bool Pawn::m_isChessMoveAllowed(const Position& pos,
                                const ChessBoard& board) const {
    if (!(mPiecePosition == pos || m_isMovingBack(pos))) {
        if (m_isMovingDiagonal(pos) && board.m_isValidMove(pos) &&
                abs(m_advancerate(pos).y) == 1 &&
                abs(m_advancerate(pos).x) == 1) {
            return true;
        }

        if (abs(m_advancerate(pos).y) == 1 && !m_isMovingDiagonal(pos)) {
            return true;
        }

        if (!m_isMoved() && abs(m_advancerate(pos).y) == 2) {
            return true;
        }
    }

    return false;
}
bool Pawn::m_isMoved() const {
    if ((mPieceColor == ChessPieceColor::White && mPiecePosition.x == 1) ||
            (mPieceColor == ChessPieceColor::Black && mPiecePosition.x == 6)) {
        return true;
    }

    return false;
}
