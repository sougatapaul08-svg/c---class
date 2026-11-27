#include<iostream>
using namespace std;
int x=0;  //it can be accessed throughout the entire program,so the value of x can be manipulated throughout the whole program.
main()
{
    int y=0;
    {
        int y=20;  //limited to this block  
        cout<<x<<y<<endl;
        x++;y++;
        {
            int y=20;   //limited to this block
            cout<<x <<y<<endl;
        }
    }
    cout<<x<<y;
}