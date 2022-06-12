#include <iostream>
#include "board/board.h"
#include "board/column.h"
#include "board/cell.h"


int main()
{
    std::cout << "hi" << std::endl;

    Board::Cell c1;
    std::cout << c1.str() << std::endl;
    c1.insertChip(3);
    std::cout << c1.str() << std::endl;

    Board::Column a1(6);
    std::cout << a1.str() << std::endl;

    for (int i=0; i < 4; ++i)
    {
        a1.insertChip(2);
    }

    std::cout << a1.str() << std::endl;

    Board::Column a2 = a1;

    Board::Board b1;

    // b1[3][0] = 2;

    for (int i=0; i < 4; i++)
    {
        b1.insertChip(2, 3);
    }

    std::cout << b1.str() << std::endl; 

}
