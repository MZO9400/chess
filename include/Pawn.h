#pragma once

#ifndef PAWN_H
#define PAWN_H

#include <Pieces.h>
#include <ChessBoard.h>

class Pawn : public Pieces {
  public:
    /** Default constructor */
    Pawn(const Position&, const ChessPieceColor&);
    Pawn() {}
    /** Default destructor */
    virtual ~Pawn();

    bool m_isMoved() const;
    bool m_isChessMoveAllowed(const Position&, const ChessBoard&) const;

  protected:

  private:
};

#endif // PAWN_H
