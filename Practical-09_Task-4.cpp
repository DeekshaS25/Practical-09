#include<iostream>
using namespace std;

float sum=0.0;
class Student 
{
  private:
    char name[30];
    int age;
    float marks;
  public:
    void read(){
     cout<<"\nName: ";
     cin>>name;
     cout<<"Age: ";
     cin>>age;
     cout<<"Marks: ";
     cin>>marks;
    }
    friend void total(Student);
};
void total(Student s)
{
  sum+=s.marks;
}
int main()
{
  int i;
  Student stu[3];
  for(i=0;i<3;i++){
    cout<<"\nEnter details of student "<<i+1<<":";
    stu[i].read();
    total(stu[i]);
  }
   cout<<"\nTotal marks: "<<sum;
   
   return 0;
}
