#include<iomanip>
#include<ios>
#include<iostream>

using namespace std;

int main()
{
  //Initializing the integer
  int num=10;
  
  cout<<"Before setting the fill char: \na-jump to next line using endl"<<endl<<"b-using setw to set minimum width of output \n"<<setw(10);
  cout<<num<<endl;
  
  //Using setfill()
  cout<<"Setting the fill char"<<"setfill to*:\n"<<setfill('*')<<setw(10);
  
  cout<<num<<endl;
  
  return 0;
}
