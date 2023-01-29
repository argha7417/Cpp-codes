/*  C++ program to Add two Complex number passing objects to function  */
#include <iostream>
using namespace std;
class complex
{
    int re,im;
    public: 
        void get()
        {
            cout<<"Enter Real part:"<<endl;
            cin>>re;
            cout<<"Enter Imaginary part:"<<endl;
            cin>>im;
        }
        void display()
        {
            cout<<re<<"+"<<im<<"i"<<"\n";
        }
        void sum(complex,complex);
};
void complex :: sum(complex c1, complex c2)//FUNCTION DEFINATION OUTSIDE THE CLASS
{
    re=c1.re+c2.re;
    im=c1.im+c2.im;
}
int main()
{
    complex c1, c2, c3;
    cout<<"ENTER 1ST COMPLEX NUMBER:\n";
    c1.get();
    cout<<"ENTER 2ND COMPLEX NUMBER:\n";
    c2.get();
    cout<<"\nThe 1st complex no. is :: ";
    c1.display();
    cout<<"\nThe 2nd complex no. is :: ";
    c2.display();

    c3.sum(c1,c2);

    cout<<"\nThe Sum of two complex no.s are :: ";
    c3.display();

    return 0;
}