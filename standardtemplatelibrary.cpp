#include<iostream>
#include<conio.h>
using namespace std;

template<class R, class P>
void fun(R a,P b)
{
    P z= a+b;
    cout<<z<<endl;
}
int main()
{
    //fun(3,8);
    //fun(3.5,6.7);
    fun(3,5.9);
    getch();
}