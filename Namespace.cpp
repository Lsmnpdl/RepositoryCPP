#include<iostream>

using namespace std;

namespace English 
{
    void greet()
    {
        cout<<"Thank you!"<<endl;
    }
}

namespace Nepali
{
    void greet()
    {
        cout<<"Dhanyabad!"<<endl;
    }
}

int main()
{
    English::greet();
    Nepali::greet();
    return 0;
}