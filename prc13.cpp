//print a table of element and value using array
#include<iostream>
using namespace std;
int main(){
    int arr[5],n;
    cin>>n;
    cout << "Element    Value\n";                                                                                                                        // "\t" is used to print a tab space
    for(int i = 0; i < 5; i++){
        cout << i << "           " << arr[i] << endl;
    }
    return 0;
}