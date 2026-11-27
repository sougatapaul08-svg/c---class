/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *p=NULL;
    p=new int;
    if(p==NULL){
        cout<<"\nMemory allocation failure";
        exit(1);
    }
    else{
        cout<<"\nMemory allocated";
        *p=12;
        cout<<"Integer value stored is:"<<*p;
        delete p;  //Deletion of memory;
        cout<<"\n Memory deallocated";
    }
    return 0;
} */

//write a program to find out the simple interest and all of ptr will be allocated to dynamic memory
#include<iostream>
using namespace std;
int main(){
    float *p=NULL;
    p=new float[3];
    if(p==NULL){
        cout<<"\nMemory allocation failure";
        exit(1);
    }
    else{
        cout<<"\nMemory allocated";
        cout<<"\nEnter principal, rate and time:";
        cin>>p[0]>>p[1]>>p[2];
        float simple_interest=(p[0]*p[1]*p[2])/100;
        cout<<"\nSimple interest is:"<<simple_interest;
        delete[] p;  //Deletion of memory;
        cout<<"\n Memory deallocated";
    }
    return 0;
}


#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    float *p=NULL;
    float *r=NULL;
    float *t=NULL;
    float *si=NULL;
    p=new float;
    r=new float;
    t=new float;
    si=new float;
    if (p==NULL || r==NULL || t=NULL)
    {
        /* code */
    }
    
}

//write a program to allocate memory for int array and take user input for the aaray; 
#include<iostream>
using namespace std;
int main(){
    int *arr=NULL;
    int n;
    cout<<"\nEnter the size of array:";
    cin>>n;
    arr=new int[n];
    if(arr==NULL){
        cout<<"\nMemory allocation failure";
        exit(1);
    }
    else{
        cout<<"\nMemory allocated";
        cout<<"\nEnter the elements of array:";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"\nThe elements of array are:";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        delete[] arr;  //Deletion of memory;
        cout<<"\n Memory deallocated";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int *p=NULL;
    int n;

}