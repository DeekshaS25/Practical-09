#include<iostream>
using namespace std;

class A{
  public:
    A()
    {
      cout<<"a"<<endl;
    }
    ~A()
    {
      cout<<"~a"<<endl;
    }
};
class B: public A
{
  public:
  B()
  {
    cout<<"b"<<endl;
  }
  ~B()
  {
   cout<<"~b"<<endl;
  }
};
class C:public B
{
  public:
   C()
   {
    cout<<"c"<<endl;
   }
   ~C()
   {
     cout<<"~c"<<endl;
   }
};
class D:public C
{
  public:
  D()
  {
    cout<<"d"<<endl;
  }
  ~D()
  {
    cout<<"~d"<<endl;
  }
};

int main()
{
  D obj;
  
  return 0;
}
