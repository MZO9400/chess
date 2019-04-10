#include <iostream>
#include <FunctionOverloads.h>

bool operator==(const Position& _lhs, const Position& _rhs) {
    if ((_lhs.x == _rhs.x) && (_lhs.y == _rhs.y)) {
        return true;
    }
    else
        return false;
}

std::ostream& operator<<(std::ostream& _out, const ChessBoard& board) {

    for (int i = 0; i < board.m_getFilesRanks(); i++) {
        for (int j = 0; j < board.m_getFilesRanks(); j++) {
            std::cout << static_cast<char>(board.m_getBoard()[i][j]) << ' ';
        }

        std::cout << std::endl;
    }
    return (_out);
}
