using namespace std;
#include <iostream>
class Vehicle{
    private:
        int _regNo;
        int _chesisNo;
    public:
        void setRegNo(int r)
        {
            _regNo = r;
        }

        void setChesisNo(int c)
        {
            _chesisNo = c;
        }
        int getRegNo()
        {
            return _regNo;
        }

        int getChesisNo()
        {
            return _chesisNo;
        }
     
};

class Bus: public Vehicle
{
    private:
        int _routeNo;
    public:
        void setRouteNo(int rNo)
        {
            _routeNo = rNo;
        }

        int getRouteNo()
        {
            return _routeNo;
        }
};

int main (void)
{
    Bus b;
    int regNo;
    int chesisNo;
    int routeNo;

    cout<<"Enter Registration No:"<<endl;
    cin>> regNo;

    cout<<"Enter Chesis No:"<<endl;
    cin>> chesisNo;

    cout<<"Enter Route No:"<<endl;
    cin>> routeNo;

    b.setRegNo(regNo);
    b.setChesisNo(chesisNo);
    b.setRouteNo(routeNo);

    cout<< "Bus Data Initialized" <<endl;

    cout<<"Registration no of the bus is : "<<b.getRegNo()<<endl;
    cout<<"Chesis no of the bus is : "<<b.getChesisNo()<<endl;
    cout<<"Route no of the bus is : "<<b.getRouteNo()<<endl;
}
