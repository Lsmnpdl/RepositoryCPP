#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int num=1;
    for (i=1;i<=3;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}