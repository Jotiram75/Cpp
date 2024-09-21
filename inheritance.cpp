#include<iostream>
#include<conio.h>
using namespace std;

class Samsung1
{
    public:
    int x,y;
    public:
    void f1()
    {
        x=5;
        
    }
    void f2()
    {
        y=9;
    }
};
class Samsung2:Samsung1
{
    int z;
    public:
    void f3()
    {
        

        z=2;
    }
    void f4()
    {
        x=8;
        y=3;
        cout<<x<<" "<<y<<" "<<z;
    }
};
class Samsung3: public Samsung2
{
    int a,b;
    public:
    void f5()
    {

    }
};
int main()
{
    Samsung2 s1;
    
    
    s1.f3();
    s1.f4();
    getch();
}