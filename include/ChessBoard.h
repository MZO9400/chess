#pragma once

#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <Player.h>
#include <enums.h>
#include <Position.h>

/**

    0   W W W W W W W W
    1   W W W W W W W W
    2
    3
    4
    5
    6   B B B B B B B B
    7   B B B B B B B B

        A B C D E F G H

**/
class ChessBoard {
  public:
    /** Default constructor */
    ChessBoard();
    /** Default destructor */
    ~ChessBoard();

    ChessPieceType** m_getBoard() const;

    unsigned short int m_getFilesRanks() const {return mFilesRanks;}

    bool isValidMove(const Position&) const;

  protected:
    ChessPieceType** mBoard;
    unsigned short int mFilesRanks;
    Player p1;
    Player p2;
  private:
};

#endif // CHESSBOARD_H
