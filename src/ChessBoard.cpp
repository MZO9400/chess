#include <iostream>

#include "ChessBoard.h"

ChessBoard::ChessBoard() {
    mFilesRanks = 8;
    mBoard = new ChessPieceType*[mFilesRanks];

    for (int i = 0; i < mFilesRanks; ++i) {
        mBoard[i] = new ChessPieceType[mFilesRanks];

        for (int j = 0; j < mFilesRanks; ++j) {
            mBoard[i][j] = ChessPieceType::None;
        }
    }
}

ChessBoard::~ChessBoard() {
    for (int i = 0; i < mFilesRanks; i++) {
        delete[] mBoard[i];
    }

    delete[] mBoard;
}

ChessPieceType** ChessBoard::m_getBoard() const {return mBoard;}

bool ChessBoard::m_isValidMove(const Position& pos) const {
    if (mBoard[pos.x][pos.y] == ChessPieceType::None) {
        return true;
    }
    else if (mBoard[pos.x][pos.y] == ChessPieceType::King) {
        return false;
    }

    return false;
}
