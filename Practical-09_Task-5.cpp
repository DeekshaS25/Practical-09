#include<iostream>
using namespace std;
class college {
  private:
    int year;
  public:
    void setYear(int y){
     if(y>0)
       year=y;
     else
       cout<<"Enter valid value for year!\n";
    }
    int getYear(){
      return year;
    }
};

struct student{
   int year;
   void setYear(int y){
   if(y>0)
     year=y;
   else
     cout<<"\nEnter valid value for year!\n";
    }
};
int main()
{
  int y1,y2;
  college C;
  student S;
  cout<<"Enter the year for class object:";
  cin>>y1;
  C.setYear(y1);
  cout<<"Enter the year for structure object:";
  cin>>y2;
  S.year=y2;
  S.setYear(y2);
  cout<<"\n\n";
  cout<<"Year for class object:"<<C.getYear();
  cout<<"\nYear for structure object:"<<S.year;
  
}
