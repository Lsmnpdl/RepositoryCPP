#include<iostream>

using namespace std;

inline int add(int x, int y)
{
    return x+y;
}

int main()
{
    int a=5, b=7;
    cout<<"Sum of x + y:"<<add(a,b);
    return 0;
}