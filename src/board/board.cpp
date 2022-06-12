#include "board.h"

#include <vector>
#include <sstream>
#include <string>
#include <assert.h>

#include "column.h"


namespace Board
{

Board::Board():
    mWidth(7),
    mHeight(6),
    mBoardMatrix(
        std::vector<Column>(
            mWidth, Column(mHeight)))
{}


Board::Board(int width, int height):
    mWidth(width),
    mHeight(height),
    mBoardMatrix(
        std::vector<Column>(
            mWidth, Column(mHeight)))
{}


Board::Board(const Board& board):
    mWidth(board.mWidth),
    mHeight(board.mHeight),
    mBoardMatrix(board.mBoardMatrix)
{}


bool Board::canInsertChip(int column)
{
    assert(column < mWidth);
    return mBoardMatrix[column].canInsertChip();
}


void Board::insertChip(int column, int value)
{
    assert(Board::canInsertChip(column));
    mBoardMatrix[column].insertChip(value);
}


Column Board::operator[](int position)
{
    return mBoardMatrix[position];
}


std::string Board::str()
{
    std::stringstream s;
    for (int i=0; i<mHeight; ++i)
    {
        for (int j=0; j<mWidth; ++j)
        {
            s << mBoardMatrix[j][i].str();
        }
        s << "\n";
    }
    return s.str();
}

}  // namespace Board
