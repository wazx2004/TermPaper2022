#include "AbstractTarget1.h"
#pragma once
#include <vector>
#include <iostream>

class AbstractTarget
{
protected:
    int rows;
    int cols;

public:
    AbstractTarget() :rows(0), cols(0) {}
    AbstractTarget(int rows, int cols) :rows(rows), cols(cols) {}
    int aim;
    virtual int shoot(int x, int y);
    int centerX();
    int centerY();
    void printf();

    int centerX()
    {
        return rows / 2;
    }
    int centerY()
    {
        return cols / 2;
    }
};
