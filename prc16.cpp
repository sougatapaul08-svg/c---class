#include<iostream>
using namespace std;
int main(){
    int a[20],key,i,n;
    int c=1;
    cout<<"Enter the number of elements:\t";
    cin>>n;
    cout<<"Enter the elements: \t";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter the element to be found: \t";
    cin>>key;
    for(i=0;i<n;i++)
    if(a[i]==key)   //comparision
    {
        cout<<"key found at location\t"<<i;
        c++;
        break;
    }
    if(c==1)
    cout<<"element not found in the list";
}