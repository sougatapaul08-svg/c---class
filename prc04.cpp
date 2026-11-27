#include<iostream>
using namespace std;
int main(){
    int a=10,b=25;
    void swap(int &a,int &b);
    cout<<"before function calling"<<a<<b<<endl;
    swap(a,b);
    cout<<"after function calling\n"<<a<<b<<endl;
}
void swap(int &x,int &y)
{
    int z;
    z=x;
    x=y;
    y=z;
    cout<<"value is"<<x<<y;
}