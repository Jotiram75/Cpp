#include<iostream>
#include<conio.h>
using namespace std;

class Car
{
    public:
    int tyre;
    int steering;
    int brake;
    void fitTyre()
    {
        cout<<"Tyre Fit Run Successfully"<<endl;
    }
    void setBrake()
    {
        cout<<"Brake Set Run Successfully"<<endl;
    }

};

int main()
{
cout<<"Hello";
Car c1;
c1.fitTyre();
getch();
}