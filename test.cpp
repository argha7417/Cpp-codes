/*#include <iostream>
using namespace std;

class Complex{
    int real, imag;

    public:
     Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    Complex (Complex &c){
        real = c.real;
        imag = c.imag;
    }

    void input(){
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the imaginary part: ";
        cin >> imag;
    }

bool operator == (Complex obj){ 
         if(real == obj.real && imag == obj.imag) 
            return true; 
         else
            return false; 
    } 
};

int main(){
    Complex c1, c2;
    cout << "First complex number : ";
    c1.input();
    cout << "Second complex number: ";
    c2.input();
    if(c1 == c2)
        cout << "Equal";
    else
        cout << "not equal";

    return 0;
}
*/
#include <iostream>
using namespace std;

class matrix{
    int m[3][3];

    public: 
    //int m[3][3];
    void read(void){
        cout << "Enter the elements of the 3x3 matrix: \n";
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << "m[" << i << "] [ " << j << "] = ";
                cin >> m[i][j];
            }
        }
    }
    void display(void){
        
        for(int i=0; i<3; i++){
            cout << "\n" ;
            for(int j=0; j<3; j++){
                cout << m[i][j] << "\t";
            }
        }
    }
    friend matrix(trans);
};

matrix trans(matrix m1){
    matrix m2;      //creating an object
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            m2.m[i][j] = m1.m[j][i];

    return(m2);
}

int main(){
    matrix mat1, mat2;
    mat1.read();
    cout << "Entered matrix is : ";
    mat1.display();

    mat2 = trans(mat1);
    cout << "Transposed matrix: ";
    mat2.display();

    return 0;
}