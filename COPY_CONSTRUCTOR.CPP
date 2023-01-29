#include <iostream>
using namespace std;
class Check
{
public:
int val;
Check(int a)
{
val=a;
}
Check(Check &i)// COPY CONSTRUCTOR 
{
val = i.val;// CHECK=CLASS NAME, i=obj 
}
};
int main()
{
int add_val;
Check a1(50);
Check a2(a1);
add_val = a2.val + 10;
cout<<add_val;
}
