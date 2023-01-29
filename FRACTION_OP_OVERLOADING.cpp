#include <iostream>
using namespace std;
class Fraction
{
    private:
        int n1,n2,d1,d2,n,d;
    public:
        Fraction()
        {
            n1=0;
            n2=0;
            d1=0;         
            d2=0;
        }
        Fraction(int num1,int nnum2,int det1, int det2)
        {
            n1=num1;
            n2=num2;
            d1=det1;
            d2=det2;
        }
        void input();
        {
            cout<<"ENTER THE 1ST NUMERATOR:"<<endl;
            cin>>n1;
            cout<<"ENTER THE 1ST DENOMERATOR:"<<endl;
            cin>>d1;
            cout<<"ENTER THE 2ND NUMERATOR:"<<endl;
            cin>>n2;
            cout<<"ENTER THE 2ND DENOMERATOR:"<<endl;
            cin>>d2;
        }
        void faction(){}
        int operator +(Fraction)
        {
            Fraction temp;
            temp.n=(temp.n1*temp.d2)+(temp.d1*temp.n2)
            temp.d=temp.d1*temp.d2;
            return temp;
        }
        void display()
        {
            cout<<"THE FRACTION IS="<<a<<"/"<<b<<endl;
        }
};
int main()
{
    Fraction f1(2,3),f2(3,4);
    Fraction f3=f1+f2;
    f3.display();
    return 0;
}