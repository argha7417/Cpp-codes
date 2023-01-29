//Write a C++ program to display Student details using classes
#include<iostream>
using namespace std;
class student 
{
  private:
    char name[20],regd[10], branch[10];
    int sem;
  public:
    void input();
    void display();
};

void student :: input()
{
  cout<<"Enter the name of the student:"<<endl;
  cin>>name;
  cout<<"Enter the regd:"<<endl;
  cin>>regd;
  cout<<"Enter the sem:"<<endl;
  cin>>sem;
  cout<<"Enter the branch:"<<endl;
  cin>>branch;
}

void student :: display()
{
  cout<<"NAME:"<<name<<endl;
  cout<<"REG NUMBER:"<<regd<<endl;
  cout<<"SEMESTER:"<<sem<<endl;
  cout<<"BRANCH:"<<branch<<endl; 
}

int main()
{
  student s;
  s.input();
  s.display();
  return 0;
}
