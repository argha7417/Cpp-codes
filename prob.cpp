/*

There is a car which can go only forward and backward. 
If car moves 1 unit time in forward then in next unit time in backward
then next in forward. Car has forward speed and backward speed. 
There are two walls one in front of car adn another is in back of car.
In between some place there is a car. 
How far the wall is from front of the car is x meter and from back is y meter.
Inputs:-
   Forward distance
   Backward distance
   Forward speed
   Backward speed
   Start from forward or backward
Outputs:-
   Whether there will be a collision
   If collision happens then with which wall
   If collision happens then after how many unit time will it collide.

fs=5
bs=8
fd=23
bd=18
FORWARD
OUTPUT: backward after 10 sec

*/
#include <iostream>
using namespace std;
int main()
{ 
    int fs, bs, fd, bd, cf=0, cb=0;
    char im;
    cout<<"ENTER THE FORWARD SPEED IN MPS";
    cin>>fs;
    cout<<"ENTER THE BACKWARD SPEED IN MPS";
    cin>>bs;
    cout<<"ENTER THE FORWARD DISTANCE IN METERS";
    cin>>fd;
    cout<<"ENTER THE BACKWARD DISTANCE IN METERS";
    cin>>bd;
    cout<<"ENTER THE INITIAL MOVEMENT  IN  'F/B'";
    cin>>im;
    if(fs==bs)
    {
        cout<<"THE CAR WILL NOT COLLIDE";
    }
    while(fd<=0 || bd<=0)
    {
        if (im=='F' || im=='f')
        {
            fd=fd-fs;
            cf++;
            cout<<cf;
        }
        else if(im=='B'|| im=='b')
        {
            bd=bd-bs;
            cb++;
            cout<<cb;
        }
}
cout<<"CAR COLLIDED FORWARD IN "<<cf<<" SECONDS"<<endl;
cout<<"CAR COLLIDED BACKWARD IN "<<cb<<" SECONDS"<<endl;
return 0;
}
