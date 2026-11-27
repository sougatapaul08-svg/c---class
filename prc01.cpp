#include<iostream>
using namespace std;
int sum(int,int);
main(){
    int a=10,b=20;
    int c=sum(a,b);
    cout<<"Sum is"<<c;
    getch();
}
int sum(int x,int y)
{
    int s;
    s=x+y;
    return(s);
}