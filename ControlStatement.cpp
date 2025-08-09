#include<iostream>
using namespace std;
int main()

{
    int i=1;
    int choice;
    Menu:

    cout<<"Enter choice (1-->For loop, 2-->While loop & 3-->Do while loop): ";
    cin>>choice;

    switch(choice)
    {
        case 1:
                cout<<"For loop: ";


                for(i=1;i<=5;i++)
                    {
                        if (i==3)
                        {
                            continue;  //skips printing 3
                        }
                        cout<<i<<" ";
                        
                    }
                cout<<endl;
                break;
        case 2:
                cout<<"While loop: ";
                i=1;
                while(i<=5)
                {
                    if(i==3)
                    {
                        i++;
                        continue;
                    }
                    cout<<i;
                    cout<<" ";
                    i++;
                }
                cout<<endl;
                break;
        case 3:
                cout<<"Do while loop: ";
                i=1;
                do
                {
                    if (i==3)
                    {
                        i++;
                        continue;
                        
                    }
                    cout<<i;
                    cout<<" ";
                    i++;
                }while(i<=5);
                cout<<endl;
                break;
        default:
                goto Menu;
    }
return 0;
}