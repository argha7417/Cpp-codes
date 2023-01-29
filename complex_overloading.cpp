//to overload + operator.

#include <iostream>
using namespace std;

class complex{
    int x, y;
    public:
        complex(){
            x = 0;
            y = 0;
        }
        complex(int real, int imag){
            x = real;
            y = imag;
        }

        complex operator +(complex c){
            complex temp;
            temp.x = x + c.x;
            temp.y = y + c.y;

            return (temp);
        }

        void display(){
            cout << x << "+j" << y << "\n";
        }
};

        int main(){
            complex c1, c2, c3;
            c1 = complex(2,3);
            c2 = complex(4,5);
            c3 = c1+c2;

            cout << "C1 = ";
            c1.display();
            cout << "C2 = ";
            c2.display();
            cout << "C3 = ";
            c3.display();

            return 0;
        }
        