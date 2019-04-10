#ifndef FUNCTIONOVERLOADS_H_INCLUDED
#define FUNCTIONOVERLOADS_H_INCLUDED

#pragma once
#include <Position.h>
#include <ChessBoard.h>

bool operator==(const Position&, const Position&);
std::ostream& operator<<(std::ostream&, const ChessBoard&);

#endif // FUNCTIONOVERLOADS_H_INCLUDED
