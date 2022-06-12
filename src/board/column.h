#ifndef BOARD_COLUMN_H
#define BOARD_COLUMN_H

#include <vector>
#include <string>

#include "cell.h"

namespace Board
{

class Column
{
public:
    Column(int height);
    Column(const Column& column);

    bool canInsertChip();
    void insertChip(int value);

    Cell operator[](int position);

    std::string str();

private:
    int mHeight;
    int mLowestPosition;
    std::vector<Cell> mCells;
};

}  // namespace Board

#endif
