#include <iostream>

#include "ChessBoard.h"

std::ostream& operator<<(std::ostream& _out, const ChessBoard& board) {

    for (int i = 0; i < board.m_getFilesRanks(); i++) {
        for (int j = 0; j < board.m_getFilesRanks(); j++) {
            std::cout << static_cast<char>(board.m_getBoard()[i][j]) << ' ';
        }

        std::cout << std::endl;
    }
}

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

bool ChessBoard::isValidMove(const Position& pos) const {
    if (mBoard[pos.x][pos.y] == ChessPieceType::None) {
        return true;
    }

    return false;
}
