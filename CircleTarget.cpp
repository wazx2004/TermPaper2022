#include "CircleTarget.h"
#pragma once
#include "AbstractTarget1.h"
#include <iomanip>
#include <iostream>
using namespace std;

class CircleTarget : public AbstractTarget
{public:
    int x_center, y_center;

    /*1.Заполнение
    2.Метод shoot*/

    int SetCenter()
    {
       x_center = centerX();
       y_center = centerY();
    }

    bool miss = 0;  
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < columns; col++)
        {
            miss = radius - sqrt((row - x_center) * (row - x_center) + (col - y_center) * (col - y_center));
            (массив / вектор)[row][col] = miss;
        }
    }


    int CircleTarget::shoot(int x_shoot, int y_shoot)
    {
        int result = 0;





        return result;
    }
};
