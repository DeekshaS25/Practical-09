#include<iostream>
using namespace std;
class Student {
  private:
    char name[30];
    int age;
    int year;
    char section;
    float marks;
  public:
    void read(){
     cout<<"\nName: ";
     cin>>name;
     cout<<"Age: ";
     cin>>age;
     cout<<"Year: ";
     cin>>year;
     cout<<"Section: ";
     cin>>section;
     cout<<"Marks: ";
     cin>>marks;
    }float getmarks(){
       return marks;
    }
};
int main()
{
  Student s[10];
  int i,n;
  float totalmarks=0.0;
  cout<<"Enter no. of students:";
  cin>>n;
  for(i=0;i<n;i++){
    cout<<"\nEnter details of student "<<i+1<<":";
    s[i].read();
  }for(i=0;i<n;i++)
     totalmarks+=s[i].getmarks();
   cout<<endl<<"Total marks of students in the college: "<<totalmarks;
   
   return 0;
}
