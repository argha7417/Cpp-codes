#include <iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    /*CREATING A CONSTRUCTOR:
    CONSTRUCTOR IS A SPECIAL MEMBER FUNCTION WITH SAME NAME 
    AS THE CLASS. 
    IT IS USED TO INITIALIZE THE OBJECTS OF ITS CLASS.
    IT IS AUTOMATICALLY INVOKED.
    */
   complex(void); //CONSTRUCTOR DECLARATION
   void display()
{
    cout<<a<<"+"<<b<<"i";
}
};

complex  :: complex(void)// THIS IS A DEFAULT CONSTRUCTOR
{
    a=10;
    b=0;
}

int main()
{
    complex c;
    c.display();
    return 0;
}

/*
CHARACTERISTICS OF CONSTRUCTOR:
1. IT SHOULD BE DECLARED IN THE PUBLIC SECTION OF THE CLASS
2. THEY ARE AUTOMATICALLY  INVOKED WHENEVER THE OBJECT IS 
CREATED
3. THEY CANNNOT RETURN VALUES AND CANNOT HAVE RETURN TYPES.
4. IT CAN HAVE DEFAULT ARGUMENTS
5. WE CANNNOT REFER TO THE ADDRESS.
*/