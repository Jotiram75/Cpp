#include<iostream>
#include<conio.h>
using namespace std;

struct Car
{
    
    int tyre;
    int steering;
    int brake;
    void fitTyre()
    {
        cout<<tyre<<endl;
        cout<<"Tyre Fit Run Successfully"<<endl;
    }
    void setBrake()
    {
        cout<<"Brake Set Run Successfully"<<endl;
    }

};

int main()
{
cout<<"Hello"<<endl;
struct Car c1;
c1.tyre=15;

c1.fitTyre();
getch();
}