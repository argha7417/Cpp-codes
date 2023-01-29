/*  C++ Program to find Area of Rectangle using constructor  */
#include <iostream>
using namespace std;
class rectangle
{
    private:
        int l,b;
    public:
        rectangle(int,int);
        int areaofrec()
        {
            return l*b;
        }
        int length()
        {
            return l;
        }
        int breadth()
        {
            return b;
        }
};
rectangle :: rectangle(int x, int y)
{
    l=x;
    b=y;
}
int main()
{
    rectangle a(2,3);
    cout<<"LENGTH"<<a.length()<<endl;
    cout<<"BREADTH:"<<a.breadth()<<endl;
    cout<<"AREA:"<<a.areaofrec()<<endl;;
    return 0;
}
