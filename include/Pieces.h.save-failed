#pragma once

#ifndef PIECES_H
#define PIECES_H

#include <Position.h>
#include <enums.h>
#include <ChessBoard.h>
#include <FunctionOverloads.h>

class Pieces {
  public:
    /** Default constructor */
    Pieces();
    /** Default destructor */
    virtual ~Pieces() = 0;

    virtual bool m_isChessMoveAllowed(const Position&, const ChessBoard&)
    const = 0;

    Position m_getPiecePosition();
    Position m_advancerate(const Position&) const;

    ChessPieceColor m_getColor() const;
    ChessPieceType m_getPieceType() const;

    void m_setPieceType(const ChessPieceType&);
    void m_setColor(const ChessPieceColor&);

    bool m_isMovingBack(const Position&) const;
    bool m_isMovingDiagonal(const Position&) const;
    bool m_isMovingStraight(const Position&) const;


  protected:
    Position mPiecePosition;
    ChessPieceType mPieceType;
    ChessPieceColor mPieceColor;

  private:
};

#endif // PIECES_H
