#include<iostream>
using namespace std;
class base
{
    private:
    int base_a;
    protected:
    int base_b;
    public:
    void base_set(){
        cin>>base_a>>base_b;
        cout<<base_a<<" "<<base_b<<endl;
    }

};
class derived:public base
{
    private: int derived_a;
    protected:int derived_b;
    public:
    void derived_set(){
        cin>>derived_a>>derived_b;
        cout<<derived_a<<" "<<derived_b<<endl;
    }
};
int main(){
    derived obj;
    obj.base_set();
    obj.derived_set();
    return 0;
}