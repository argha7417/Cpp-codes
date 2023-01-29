#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 string s;
 int i,j,d=0,a,p,z;
 cout<<"Enter Email id: ";
 cin>>s;
 for(i=0;i<s.size();i++)
 {
    int o=s.find_last_of('.');
    if((o+2)<=s.size())//minimum 2 characters after last dot
    {
        a=1;
    }
    if(s[i]=='@')//only one @
    {
        d=d+1;
    }
    if(s[i]=='@' && s[i+1]!='.' )//something should be between dot and @
    {
        z=1;
    }
    int u=s.find_last_of('@');
    if(u<o)//last dot should be after @
    {
        p=1;
    }
    
 }
 if(a==1&&d==1&&z==1&&p==1)
 {
    cout<<"The mail id is Valid:"<<endl;
 }
 else
 {
    cout<<"The mail id is Invalid"<<endl;
 }
 return 0;
}
