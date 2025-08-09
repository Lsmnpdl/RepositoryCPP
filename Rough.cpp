/* Isosceles pyramid */
#include<iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;

    int i;
    int num=1;

    for(i=1;i<=rows;i++)
    {
        for(int j1=1;j1<=rows-1;j1++)
        {
            cout<<" ";
        }
        for(int j2=1;j2<=i;j2++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
return 0;
}