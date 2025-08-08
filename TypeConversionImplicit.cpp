#include<iostream>
using namespace std;

int main()
{
    int a=5;
    float b=3.1415;
    float c=a+b;    // a is implicitly converted into float.

    cout<<"Value of c: "<<c<<endl;

    return 0;
}