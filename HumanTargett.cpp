#include "HumanTargett.h"
#pragma once
#include "AbstractTarget1.h"

class HumanTargett :
    public AbstractTarget
{
    /*1.Заполнение
  2.Метод shoot*/

    int SetCenter()
    {
        x_center = centerX();
        y_center = centerY();
    }
};

