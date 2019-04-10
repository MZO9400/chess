#pragma once

#ifndef KING_H
#define KING_H

#include <Pieces.h>


class King : public Pieces {
  public:
    /** Default constructor */
    King(const Position&, const ChessPieceColor&);
    King() {}
    /** Default destructor */
    virtual ~King();

    bool m_isChessMoveAllowed(const Position&, const ChessBoard&) const;

  protected:


  private:
};

#endif // KING_H
