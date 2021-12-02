#include<iostream>
using namespace std;
class area{
  public:
    float a;
    float b;
    area(float x,float y)
    {
      a=x;
      b=y;
    }
    area(float x)
    {
      a=x;
      b=x;
    }
    void printArea()
    {
      cout<<"Area is:"<<a*b<<endl;;
    }
};

int main()
{
  area rectangle(10,20);
  area square(10);
  rectangle.printArea();
  square.printArea();
  
  return 0;
}
  
