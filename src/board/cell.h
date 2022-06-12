#ifndef BOARD_CELL_H
#define BOARD_CELL_H

#include <string>


namespace Board
{

class Cell
{
public:
    Cell();
    Cell(int value);
    Cell(const Cell& cell);

    void insertChip(int value);

    std::string str();

private:
    int mValue;
};

}  // namespace Board

#endif
