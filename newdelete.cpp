#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int *k;
    k= new int;
    *k= 4;
    cout<< *k <<endl;

    int *p;
    p= new int[5];
    *(p+3)=7;
    *(p+0)=3;
    *p=7;
    cout<<*(p+0);

    delete k;
    delete []p;

    getch();
}