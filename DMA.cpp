#include<iostream>

using namespace std;

int main()
{
     //DMA for five int i.e. array
    int n=5;
    int *arr= new int[n];
   

    cout<<"Enter array: ";
    for(int i=0;i<=4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<endl;
    }
        
    //DMA for single int
    int *ptr= new int;
    *ptr=25;
    cout<<"*ptr: "<<*ptr<<endl;

    delete[] arr;
    delete ptr;

    return 0;
    
}