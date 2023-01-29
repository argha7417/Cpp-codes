
/*

A Book is composed of
a. No of pages (X)
b. No of words (Y)
c. No of chapters (Z)
There are three kind of books, namely
a. Literature
b. Science
c. Technology
Literature books have a. No of illustrations (I) and b. No of quotes (Q)
Science books have a. No of formulae (F) b. No of solved problems (P) and c. 
No of exercises (E)
Technology books have a. No of codes (C) and b. No of projects (R)
Knowledge Value of books are computed as -
A. For literature type: (X+Y+Z)*(I^2+20)
B. For science type: (X+Y+Z)*(F^2+P+2E)
C. For technology type: (X+Y+Z)* ((C+R)^2)
(X+Y+Z) is called basic knowledge value'
Any two books can be added to compute composite knowledge values. 
The corresponding 
operator is Anybook can be created out of an existing book of same 
type, but in that case the knowledge 
value would become half of the existing book.
Based on the above criteria design classes so that the following is possible:
1. The program can take X, Y, Z.
2. Type of book
3. Depending on type of book, it should take (I & Q) or (F & P & E) or (C & R)
4. Can compute Knowledge Value of any book
5. Add any two books to get composite Knowledge Value
6. Can copy an existing book
base on the avove criteria Design classes so that the following is possible 
*The program can take x,y,z.
*Type of book
* Depend on the type of book, it should take(i,q) | (f,p,e) | (c,r)
*Can compute kv

*/

#include <iostream>
using namespace std;
class Book
{
    public:
        int x,y,z,a;
        void input();
        void cal();
        void display();
};
void Book :: input()
{
    cout<<"Enter the number of pages:"<<endl;
    cin>>x;
    cout<<"Enter the number of words:"<<endl;
    cin>>y;
    cout<<"Enter the number of chapters:"<<endl;
    cin>>z;
}
void Book :: cal()
{
    a=x+y+z;
}
void Book :: display()
{
    cout<<"Basic Knowledge value is:"<<a<<endl;
}

//----------------------------------------------------------------------------------------------------------------

class Literature : public Book
{
    int i,q,lit;
    public:
        void input1();
        void cal1();
        void display1();
};
void Literature :: input1()
{
    cout<<"FOR LITERATURE BOOK"<<endl;
    cout<<"Enter the number of Illustratons:"<<endl;
    cin>>i;
    cout<<"Enter the number of Quotes:"<<endl;
    cin>>q;
}
void  Literature :: cal1()
{
    lit=(x+y+z)*((i^2)+20);
}
void Literature :: display1()
{
    cout<<"Knowledge value of Literature Type of book is:"<<lit<<endl;
}

//----------------------------------------------------------------------------------------------------------------

class Science : public Book
{
    int f,p,e,sci;
    public:
        void input2();
        void cal2();
        void display2();
};
void Science :: input2()
{
    cout<<"FOR SCIENCE BOOK"<<endl;
    cout<<"Enter the number of Formulae:"<<endl;
    cin>>f;
    cout<<"Enter the number of Problems:"<<endl;
    cin>>p;
    cout<<"Enter the number of Exercise:"<<endl;
    cin>>e;
}
void Science :: cal2()
{
    sci=(x+y+z)*((f^2)+p+(2*e));
}
void Science :: display2()
{
    cout<<"Knowledge value of Science Type of book is:"<<sci<<endl;
}

//----------------------------------------------------------------------------------------------------------------

class Technology : public Book
{
    int c,r,tech;
    public:
        void input3();
        void cal3();
        void display3();
};
void Technology :: input3()
{
    cout<<"FOR TECHNOLOGY BOOK"<<endl;
    cout<<"Enter the number of Codes:"<<endl;
    cin>>c;
    cout<<"Enter the number of Projects:"<<endl;
    cin>>r;
}
void Technology :: cal3()
{
    tech=(x+y+z)*((c+r)^2);
}
void Technology :: display3()
{
    cout<<"Knowledge value of Technology Book is:"<<tech<<endl;
}

//----------------------------------------------------------------------------------------------------------------

int main()
{
    Book g;
    g.input();
    g.cal();
    g.display();
   
    Literature k;
    k.input1();
    k.cal1();
    k.display1();

    Science o;
    o.input2();
    o.cal2();
    o.display2();
    
    
    Technology j;
    j.input3();
    j.cal3();
    j.display3();
    
    return 0;
}

//----------------------------------------------------------------------------------------------------------------
