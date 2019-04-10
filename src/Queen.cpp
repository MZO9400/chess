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
            board.m_isValidMove(pos)) {
        return true;
    }

    if (board.m_isValidMove(pos) && (abs(m_advancerate(pos).x) == 1 ||
                                     abs(m_advancerate(pos).y) == 1)) {
        return true;
    }

    if (m_isMovingDiagonal(pos) && board.m_isValidMove(pos) &&
            !(mPiecePosition == pos)) {
        return true;
    }

    if (m_isMovingStraight(pos) && board.m_isValidMove(pos) &&
            !(mPiecePosition == pos)) {
        return true;
    }
}
