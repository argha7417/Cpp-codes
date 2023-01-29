//Factorial using Classes
#include <iostream>
using namespace std;

class factorial
{
    private:
        int n,n1,f=1;
    public:
        void input();
        void cal();
        void display();
};

void factorial :: input()
{
    cout<<"Enter any number:";
    cin>>n;
}

void factorial :: cal()
{
    n1=n;
    if (n==0 ||n==1)
    cout<<"Factorial of number ["<<n<<"] is :: "<<f<<"\n";
    else
    {
        while (n>0)
        {
            f=f*n;
            n--;
        }
    }
}

void factorial :: display()
{
    cout<<f;
}

int main()
{
    factorial f;
    f.input();
    f.cal();
    f.display();
    return 0;
}

