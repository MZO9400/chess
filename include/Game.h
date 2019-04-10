#pragma once

#ifndef GAME_H
#define GAME_H

#include <Player.h>
#include <ChessBoard.h>
#include <FunctionOverloads.h>
#include <enums.h>

struct Game {
    ChessBoard board;
    Player P1;
    Player P2;

    void deployChessPieces(ChessBoard&, Player&, Player&);
    void showGame(const ChessBoard&) const;
};

#endif // GAME_H
