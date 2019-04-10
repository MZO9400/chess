#include <iostream>

#include "Queen.h"

Queen::Queen(const Position& pos, const ChessPieceColor& color) {
    mPiecePosition = pos;
    mPieceType = ChessPieceType::Queen;
    mPieceColor = color;
}

Queen::~Queen() {
    //dtor
}

bool Queen::m_isChessMoveAllowed(const Position& pos,
                                 const ChessBoard& board) const {
    if (((abs(m_advancerate(pos).x) == 2 && abs(m_advancerate(pos).y) == 1) ||
            abs(m_advancerate(pos).x) == 1 && abs(m_advancerate(pos).y) == 2) &&
            board.isValidMove(pos)) {
        return true;
    }

    if (board.isValidMove(pos) && (abs(m_advancerate(pos).x) == 1 ||
                                   abs(m_advancerate(pos).y) == 1)) {
        return true;
    }

    if (m_isMovingDiagonal(pos) && board.isValidMove(pos) &&
            !(mPiecePosition == pos)) {
        return true;
    }

    if (m_isMovingStraight(pos) && board.isValidMove(pos) &&
            !(mPiecePosition == pos)) {
        return true;
    }
}
