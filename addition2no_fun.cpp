#include<iostream>
#include<conio.h>
using namespace std;

int add(int p,int q)
{
    int r;
    r=p+q;
    return r;

}

int main()
{
    int a,b;
    cout<<"Enter 2 Numbers : ";
    cin>>a>>b;
    int z=add(a,b);
    cout<<"Addition of 2 Numbers : "<<z;
    getch();

}