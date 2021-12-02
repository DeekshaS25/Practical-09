#include<iostream>
#include<stdlib.h>
#include<cstdio>

using namespace std;

class Student{
 private:
     string name;
     string phone_no;
     string address;
 public:
    void read()
    {
      cout<<"\nName: ";
      getline(cin,name);
      cout<<"Phone No.: ";
      getline(cin,phone_no);
      cout<<"Address: ";
      getline(cin,address);
    }
    void display()
    {
      cout<<"\nName: "<<name;
      cout<<"\nPhone No.: "<<phone_no;
      cout<<"\nAddress: "<<address<<endl;
    }
};

int main()
{
  Student s1,s2;
  s1.read();
  s2.read();
  s1.display();
  s2.display();
  
  return 0;
}
