#include <iostream>

#include "Pieces.h"

Pieces::Pieces() {
    //ctor
}

Pieces::~Pieces() {
    //dtor
}

Position Pieces::m_getPiecePosition() {
    return (this->mPiecePosition);
}
ChessPieceColor Pieces::m_getColor() const {
    return (this->mPieceColor);
}
void Pieces::m_setColor(const ChessPieceColor& color) {
    this->mPieceColor = color;
}
ChessPieceType Pieces::m_getPieceType() const {
    return (this->mPieceType);
}
void Pieces::m_setPieceType(const ChessPieceType& type) {
    this->mPieceType = type;
}
bool Pieces::m_isMovingBack(const Position& pos) const {
    if (mPieceColor == ChessPieceColor::White) {
        if (mPiecePosition.y > pos.y) {
            return true;
        }
    }
    else if (mPieceColor == ChessPieceColor::Black) {
        if (mPiecePosition.y < pos.y) {
            return true;
        }
    }

    return false;
}
bool Pieces::m_isMovingDiagonal(const Position& pos) const {
    if (abs(m_advancerate(pos).x) == abs(m_advancerate(pos).y)) {
        return true;
    }

    return false;
}
bool Pieces::m_isMovingStraight(const Position& pos) const {
    if ((pos.x == mPiecePosition.x && pos.y != mPiecePosition.y) ||
            (pos.x != mPiecePosition.x && pos.y == mPiecePosition.y)) {
        return true;
    }

    return false;
}
Position Pieces::m_advancerate(const Position& pos) const {
    if (mPieceColor == ChessPieceColor::White) {
        return Position(mPiecePosition.x - pos.x, mPiecePosition.y - pos.y);
    }
    else if (mPieceColor == ChessPieceColor::Black) {
        return Position(mPiecePosition.x - pos.x, mPiecePosition.y - pos.y);
    }
}
