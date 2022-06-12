#ifndef BOARD_BOARD_H
#define BOARD_BOARD_H

#include <iostream>
#include <vector>
#include <string>

#include "column.h"


namespace Board
{

class Board
{
public:
    Board();
    Board(int width, int height);
    Board(const Board& board);

    bool canInsertChip(int column);
    void insertChip(int column, int value);

    Column operator[](int position);

    std::string str();

private:
    int mWidth, mHeight;
    std::vector<Column> mBoardMatrix;
};

}  // namespace Board

#endif
