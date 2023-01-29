/*  C++ program to find Reverse of a Number using class  */
#include <iostream>
using namespace std;

class rev
{
    private:
        int n1,n,r=0,d;
    public:
        void input();
        void cal();
        void display();
};

void rev :: input()
{ 
    cout<<"Enter the number:\n";
    cin>>n;
}

void rev :: cal()
{
    n1=n;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
}

void rev :: display()
{
    cout<<r;
}

int main()
{
    rev r;
    r.input();
    r.cal();
    r.display();
    return 0;
}
