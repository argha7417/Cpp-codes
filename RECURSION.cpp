/*
//Sum of n numbers...
#include <iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    
    //FUNCTION CALLING ITSELF REPEATEDLY
    //CALLED RECUSION
    int prev=sum(n-1);
    return n+prev;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Sum of n"<<endl;
    return 0;
}
*/


//power function with recursion
#include <iostream>
using namespace std;
int power(int n,int p)
{
    if (p==0)
    {
        return 1;
    }
    int prev=power(n,p-1);
    return n*prev;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}

