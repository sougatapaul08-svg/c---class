#include<iostream>
using namespace std;

class test
{
    int code;
    static int count;

public:
    void setcode()
    {
        code = ++count;  // Increment the static count variable and assign it to code
    }

    void showcode()
    {
        cout << "Code: " << code << endl;  // Display the code of the object  
    }

    static void showcount()
    {
        cout << "Count: " << count << endl;  // Display the static count variable
    }
};

// Define static variable outside the class
int test::count = 0;

int main()
{
    test t1, t2;

    t1.setcode();
    t2.setcode();

    test::showcount();

    test t3;
    t3.setcode();

    test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}