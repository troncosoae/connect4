#include "cell.h"

#include <string>


namespace Board
{

Cell::Cell():
    mValue(0)
{}


Cell::Cell(int value):
    mValue(value)
{}


Cell::Cell(const Cell& cell):
    mValue(cell.mValue)
{}


void Cell::insertChip(int value)
{
    mValue = value;
}


std::string Cell::str()
{
    return std::to_string(mValue);
}

}  // namespace Board
