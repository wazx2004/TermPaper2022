#pragma once
#include "AbstractTarget1.h"
class CircleTarget :
    public AbstractTarget
{
        /*1.Заполнение
        2.Метод shoot*/
    const int center_X(int x)
    {
        return rows/ 2;
    }
    const int center_Y(int y)
    {
        return cols/ 2;
    }

};

