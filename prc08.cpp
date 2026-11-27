#include<iostream>
using namespace std;
void sum(int,int);
void sum(double,double);
void sum(char,char);
main()
{
    int a=10,b=20;
    double c=7.52,d=8.14;
    char e='a',f='b';
    sum(a,b);
    sum(c,d);
    sum(e,f);
}
void sum(int x,int y)
{
    cout<<"\n sum of integers are "<<x+y;
}
void sum(double x,double y)
{
    cout<<"\n sum of two floating no are "<<x+y;
}
void sum(char x,char y)
{
    cout<<"\n sum of characters are "<<x+y;
}