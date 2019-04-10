#pragma once

#ifndef QUEEN_H
#define QUEEN_H

#include <Pieces.h>


class Queen : public Pieces {
  public:
    /** Default constructor */
    Queen(const Position&, const ChessPieceColor&);
    Queen() {}
    /** Default destructor */
    virtual ~Queen();

    bool m_isChessMoveAllowed(const Position&, const ChessBoard&) const;

  protected:

  private:
};

#endif // QUEEN_H
