#pragma once

#ifndef BISHOP_H
#define BISHOP_H

#include <Pieces.h>

class Bishop : public Pieces {
  public:
    /** Default constructor */
    Bishop(const Position&, const ChessPieceColor&);
    Bishop() {}
    /** Default destructor */
    virtual ~Bishop();

    bool m_isChessMoveAllowed(const Position&, const ChessBoard&) const;

  protected:

  private:
};

#endif // BISHOP_H
