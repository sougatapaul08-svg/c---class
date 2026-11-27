#include<iostream>
#include<string>
using namespace std;
class uni{
    public:
string uname;
string address;
};
class student:public uni{
    public:
    string sname;
    int reg;
    void set(){
        cin>>uname;
        cin>>address;
        cin>>sname;
        cin>>reg;
    }
    void show(){
        cout<<uname;
        cout<<address;
        cout<<sname;
        cout<<reg;
    }
};
int main(){
    student s1;
    s1.set();
    s1.show();
}