/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *arr,sum=0;
    int size;
    cout<<"\n Enter the size of integr array:";
    cin>>size;
    cout<<"\n Creating an array of size"<<size;
    arr=new int [size];
    if(arr==NULL)
    {
        cout<<"\n Problem in memory allocation";
        exit(1);
    }
    cout<<"\nEnter array elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        //cin>>(arr+i);//possible to take input using pointer to array
        //cin>>*(i+arr);
    }
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
        //sum =sum+*(arr+i); //possible to use pointer to array for sum
    }
    cout<<"\n sum of elements of array is: "<<sum;
    delete[]arr;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int* pvalue =NULL; //pointer initialized with null;
    pvalue=new int;  //Request memory for the value;
    *pvalue=23;     //Store value at allocated address
    cout<<"Address where pointing before deletion:"<<pvalue<<endl;
    delete pvalue; //free up the memory;.
    cout<<"address where pointer is pointing after deletion:"<<pvalue<<endl;  //Dangling pointer 
    pvalue=NULL;  //pvalue is no longer a dangling pointer
    cout<<"\n"<<pvalue;
}*/

#include<iostream>
using namespace std;
class Array{
    int *arr;
    int size;
    public:
    void get_data(int n){
        size =n;
        arr=new int[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    int get_sum()
    {
        int sum=0;
        for(int i=0;i<size;i++){
            sum += arr[i];
        }
        return sum;
    }
    void display_data(){
        for(int i=0;i<size;i++){
            cout<<"\t"<<arr[i];
        }
            cout<<"\n Sum of elements="<<get_sum();
        }
        ~Array()
        {
            delete[]arr;
            cout<<"\nMemeory deallocated";
        }
    };
    int main(){
        Array a;
        int n;
        cout<<"\n Enter the  umber of elements:"<<endl;
        cin>>n;
        a.get_data(n);
        a.display_data();
        return 0;
}