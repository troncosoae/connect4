#include "column.h"

#include <sstream>
#include <string>
#include <vector>
#include <assert.h>

#include "cell.h"


namespace Board
{

Column::Column(int height):
    mHeight(height),
    mLowestPosition(0),
    mCells(std::vector<Cell>(mHeight, Cell()))
{}


Column::Column(const Column& column):
    mHeight(column.mHeight),
    mLowestPosition(0),
    mCells(column.mCells)
{}


bool Column::canInsertChip()
{
    return !(mHeight == mLowestPosition);   
}


void Column::insertChip(int value)
{
    assert(canInsertChip());
    mCells[mLowestPosition].insertChip(value);
    mLowestPosition++;
}


Cell Column::operator[](int position)
{
    return mCells[position];
}


std::string Column::str()
{
    std::stringstream s;
    for (Cell c : mCells)
    {
        s << c.str() << "\n";
    }
    return s.str();
}

}  // namespace Board
