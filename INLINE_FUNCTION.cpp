/* C++ program to find Square of a Number using inline function  */
#include <iostream>
using namespace std;

class square
{
    private:
        int n,r;
        float n1,r1;
    public:
        void input();
        void cal();
        void display();
};

inline void square :: input()
{
    cout<<"Enter an integer :";
    cin>>n;
    cout<<"Enter a Float Number :";
    cin>>n1;
}

inline void square :: cal()//INLINE FUNCTION
{
    r=n*n;
    r1=n1*n1;
}

inline void square :: display()
{
    cout<<r<<endl;
    cout<<r1<<endl;
}

int main()
{
    square s;
    s.input();
    s.cal();
    s.display();
    return 0;
}
