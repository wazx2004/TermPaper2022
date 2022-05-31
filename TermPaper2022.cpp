#include <string>
#include <iostream>
#include <vector>

using namespace std;

class BaseTarget
{
protected:
    const int rows;
    const int cols;

public:
    BaseTarget() :rows(0), cols(0) {}
    BaseTarget(int rows, int cols) :rows(rows), cols(cols) 
    {

    }
    

  virtual  int CenterCoordinates()
    {

    }
   virtual int Shot(int x,int y)
    {

    }
        

};

int main()
{
   
}
