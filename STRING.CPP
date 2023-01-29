//1......
/*
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;
    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<<str<<endl;
    return 0;
}
*/
/*
Enter a string: C++
You entered: C++

Enter another string: Programming is fun.
You entered: Programming
*/

/*
//2......
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);
    cout << "You entered: " << str << endl;
    return 0;
}
*/
//Enter a string: Programming is fun.
//You entered: Programming is fun.



/*3......
//C++ string using string data type
#include <iostream>
using namespace std;
int main()
{
    // Declaring a string object
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "You entered: " << str << endl;
    return 0;
}

Enter a string: Programming is fun.
You entered: Programming is fun.
*/



//4......
//Passing String to a Function
#include <iostream>
using namespace std;

void display(char *);
void display(string);

int main()
{
    string str1;
    char str[100];

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Enter another string: ";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);
    return 0;
}

void display(char s[])
{
    cout << "Entered char array is: " << s << endl;
}

void display(string s)
{
    cout << "Entered string is: " << s << endl;
}

//Enter a string:  Programming is fun.
//Enter another string:  Really?
//Entered string is: Programming is fun.
//Entered char array is: Really?


