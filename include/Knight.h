#pragma once

#ifndef KNIGHT_H
#define KNIGHT_H

#include <Pieces.h>


class Knight : public Pieces {
  public:
    /** Default constructor */
    Knight(const Position&, const ChessPieceColor&);
    Knight() {}
    /** Default destructor */
    virtual ~Knight();

    bool m_isChessMoveAllowed(const Position&, const ChessBoard&) const;

  protected:

  private:
};

#endif // KNIGHT_H
