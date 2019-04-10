#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <ChessBoard.h>
#include <Position.h>
#include <enums.h>
#include <King.h>
#include <Queen.h>
#include <Bishop.h>
#include <Knight.h>
#include <Rook.h>
#include <Pawn.h>
#include <FunctionOverloads.h>


class Player {
    public:
        /** Default constructor */
        Player();
        Player(const ChessPieceColor&);
        /** Default destructor */
        ~Player();
        void m_setPieceColor();

        King* m_getKing() const;
        Queen* m_getQueen() const;
        Rook* m_getRooks() const;
        Bishop* m_getBishops() const;
        Knight* m_getKnights() const;
        Pawn* m_getPawns() const;

    protected:

    private:
        ChessPieceColor mColor;
        King* king;
        Queen* queen;
        Rook* rook;
        Bishop* bishop;
        Knight* knight;
        Pawn* pawn;
};

#endif // PLAYER_H
