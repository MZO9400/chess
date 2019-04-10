#pragma once

#ifndef ROOK_H
#define ROOK_H

#include <Pieces.h>


class Rook : public Pieces {
  public:
    /** Default constructor */
    Rook(const Position&, const ChessPieceColor&);
    Rook() {}
    /** Default destructor */
    virtual ~Rook();

    bool m_isChessMoveAllowed(const Position&, const ChessBoard&) const;

  protected:

  private:
};

#endif // ROOK_H
