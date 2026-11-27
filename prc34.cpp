#include<iostream>
using namespace std;
class BC{
    public:
    virtual void show(){             //with virtual its at runtime ,without its in compile time
        cout<<"\nshow() of base class"<<endl;
    }
};
class DC:public BC{
    public:
    void show(){
        cout<<"\nshow() of derived class"<<endl;
    }
};
int main(){
    BC*bptr;
    BC base;
    bptr=&base;
    cout<<"\n-----Runtime polymorphism-----";
    cout<<"bptr points to base objects\n";
    bptr->show();  //Base class show is called
    //derived class
    DC derived;
    bptr=&derived;
    cout<<"bptr now points to derived objects\n";
    bptr->show();  //Derived class show is called
    return 0;
}