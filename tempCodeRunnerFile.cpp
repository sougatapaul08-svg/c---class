#include<iostream>
using namespace std;
class iostream
{
    static int count;
    int number;
    public:
    void getdata(int d)
    {
        number=d;
        count++;
    }
    void getcount()
    {
        cout<<count;
    }
};
int item::count;
main(){  //defination of static data
    item a,b,c;
    a.getcount();
    b.getcount;
    c.getcount;
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout<<"after reading";
    a.getcount();
    b.getcount();
    c.getcount();
}