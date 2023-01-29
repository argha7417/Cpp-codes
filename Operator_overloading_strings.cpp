/*  C++ Program to Compare Two Strings using Overloading  */
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;
class opd
{
    char str[20];
    public:
        void getdata()
        {
            gets(str);
    
        int operator ==(string s)
        {
            if (!strcmp(str,s.str))// cmp(Compare doubt)
                return 1;

            return 0;
        }
};
int main()
{
    
}