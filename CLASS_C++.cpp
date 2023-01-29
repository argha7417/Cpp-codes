#include <iostream>
using namespace std;

class Room{
    public://access specifier
    double length;//attributes
    double breadth;
    double height;

    double calculatearea()
    {
        return length * breadth;
    }

    double calculatevolume()
    {
        return length*breadth*height;
    }
};

int main()
{
    Room room1;

    room1.length=42.5;
    room1.breadth=32.1;
    room1.height=6.9;

    cout<<"Area= "<<room1.calculatearea()<<endl;
    cout<<"Volume= "<<room1.calculatevolume()<<endl;
}

/*
METHODS ARE FUNCTIONS THAT BELONG TO CLASSES

There are two ways to define functions that belongs to a class:

1. Inside class definition
2. Outside class definition
*/
