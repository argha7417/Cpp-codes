/*  C++ program to Display Student Details using constructor and destructor */
#include <iostream>
using namespace std;
class stu
{
    int c;
    private:
        char name[20],add[20];
        int roll,zip;
    public:
        stu();                              //SHOULD BE DECLARED IN THE PUBLIC SECTION
        void input();
        void display();
        ~stu();
};
stu :: stu()
{
    cout<<"CONSTRUCTED."<<endl;    //CONSTRUCTOR
}
void stu :: input()
{
    cout<<"Enter the Name:"<<endl;
    cin>>name;
    cout<<"Enter the roll number:"<<endl;
    cin>>roll;
    cout<<"Enter the student Address:"<<endl;
    cin>>add;
    cout<<"Enter the zip:"<<endl;
    cin>>zip;
}
void stu :: display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Address"<<add<<endl;
    cout<<"Zip:"<<zip<<endl;
}
stu :: ~stu()//DESTRUCTOR
{
    cout<<"DESTRUCTED"<<endl;
}
int main()
{
    stu s;
    s.input();
    s.display();
    return 0;
}
