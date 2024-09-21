#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    int x,y;
    public:
    void setData(int x, int y)
    {
        this -> x=x;
        this -> y=y;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    A a1;
    a1.setData(4,6);
    a1.display();

    getch();
}