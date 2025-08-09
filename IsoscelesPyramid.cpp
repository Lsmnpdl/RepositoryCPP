#include<iostream>

/*
##1
#2#3 
4#5#6
*/

using namespace std;

int main()
{   
    int row;
    cout<<"Enter row: ";
    cin>>row;
    
    int i;
    int j1, j2;
    int num=1;
    for(i=1;i<=row;i++)
        {
            for(j1=i;j1<=row-1;j1++)
                {
                    cout<<"#";
                }
            for(j2=1;j2<=i;j2++)
                {
                    cout<<num<<"#";
                    num++;
                }
            cout<<endl;
            
        }   

     
    return 0;
}