#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    // C-sytle cast

    int x=7;
    int y=3;

    float div1=x/y;
    float div2= (float) x / (float) y;

    cout<<fixed<<setprecision(3);

    cout<<"Division without cast: "<<div1<<endl;
    cout<<"Division with cast: "<<div2<<endl;

    cout.unsetf(ios::fixed);
    cout<<setprecision(6);

    //Reinterpret_cast

    int a=65;

    char* ptr=reinterpret_cast<char*>(&a);

    /* Alteratively using C-style cast: char* ptr= (char*) &a */

    cout<<"Reinterpreted value of a dereferenced by ptr: "<<*ptr<<endl;

    return 0;

}