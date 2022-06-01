#pragma once
#include <vector>
#include <iostream>

class AbstractTarget
{
    protected:
        int rows;
        int cols;
        std::vector<int> target;
    public:
        AbstractTarget() :rows(0), cols(0) {}
        AbstractTarget(int rows, int cols) :rows(rows), cols(cols) {}
        int aim;
        virtual int shoot(int x, int y) = 0;
        virtual int center_X() = 0;
        virtual int center_Y() = 0;
        void printf();
};

