#if !(__cplusplus >= 201703)

#error cplusplus version 201703 required,
#error Please consider compiling with -std=c++1z

#endif // __cplusplus

#include <iostream>

#include <Game.h>

int main() {
    Game chess;
    chess.board;
}
