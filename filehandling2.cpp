#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("Demo.txt");
    char a[20];
    fin>>a;
    cout<<a;
    fin.close();

    getch();
}