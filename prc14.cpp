#include<iostream>
using namespace std;
int main(){
    int a[100],i,n,k;
    cout<<"How many no to store in array"<<endl;
    cin>>n;
    cout<<"Enter the number"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the position";
    cin>>k;
    k=k-1;
    for(i=k;i<n;i++){
        a[i]=a[i+1];
    }
    cout<<"Contents of the array"<<endl;
    for(i=0;i<n;i++){   //Data Structure & Algorithms by G.A.V PAI | PDF

        cout<<a[i];
    }
}