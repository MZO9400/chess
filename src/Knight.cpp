#include <iostream>

#include "Knight.h"

Knight::Knight(const Position& pos, const ChessPieceColor& color) {
    mPiecePosition = pos;
    mPieceType = ChessPieceType::Knight;
    mPieceColor = color;
}

Knight::~Knight() {
    //dtor
}

bool Knight::m_isChessMoveAllowed(const Position& pos,
                                  const ChessBoard& board) const {
    if (((abs(m_advancerate(pos).x) == 2 && abs(m_advancerate(pos).y) == 1) ||
            abs(m_advancerate(pos).x) == 1 && abs(m_advancerate(pos).y) == 2) &&
            board.m_isValidMove(pos)) {
        return true;
    }

    return false;
}
