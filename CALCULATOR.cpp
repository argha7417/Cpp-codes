#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2;
    do
    {
        cout<<"Enter operator either + or - or * or /: ";
        cin>>op;
        cout<<"Enter two operands: ";
        cin>>num1>>num2;
        switch(op)
        {
            case '+':
                cout<<num1+num2;
                break;
            case '-':
                cout<<num1-num2;
                break;
            case '*':
                cout<<num1*num2;
                break;
            case '/':
                cout<<num1/num2;
                break;
            default:
                cout<<"Error! operator is not correct";
                break;
        }
        cout<<"Want to perform more operations?(y/n)";
        cin>>op;
    }
    while(op == 'y' || op == 'Y');
    return 0;
}
