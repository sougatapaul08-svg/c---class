#include<iostream>
using namespace std;
class Engine{
    public:
    Engine()
    {
        cout<<"Engine created\\n";
    }
    ~Engine(){
        cout<<"Engine destroyed\\n";
    }
    void start(){
        cout<<"Engine started\\n";
    }
};
class Car{
    Engine engine;   //value member:owned part
    public:
    Car(){
        cout<<"Car created\\n";
    }
    ~Car(){
        cout<<"Car destroyed\\n";
    }
    void drive(){
        engine.start();
        cout<<"Car is moving\\n";
    }
};
int main(){
    Car mycar;
    mycar.drive();
}