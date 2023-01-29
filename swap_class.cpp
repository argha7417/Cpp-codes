#include<iostream>
using namespace std;

class Swap
{
    int a,b,c;
    public:
        void input();
        void cal();
        void display();
};

void Swap :: input()
{
    cout<<"Enter the 1st and 2nd value :"<<endl;
    cin>>a>>b;
}

void Swap :: cal()
{
    a=a+b;
    b=a-b;
    a=a-b;
}

void Swap :: display()
{
    cout<<"a:"<<a<<endl<<"b:"<<b;    
}

int main()
{
    Swap s;
    s.input();
    cout<<"BEFORE SWAP:";
    s.display();
    s.cal();
    cout<<"AFTER SWAP:";
    s.display();
}
