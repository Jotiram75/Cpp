#include<iostream>
#include<conio.h>
using namespace std;


void fun1()
{
    cout<<"B"<<endl;
}
void fun2()
{
    cout<<"C"<<endl;
}
void fun3()
{
    cout<<"D"<<endl;
}
int main()
{
    cout<<"A"<<endl;
    fun1();
    fun2();
    fun3();
    getch();
}