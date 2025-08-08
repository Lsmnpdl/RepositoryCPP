#include <iostream>
using namespace std;

int main()
{
    int a = 10; 
    /* 'a' is an integer variable with value 10 stored at some memory address */

    // int ptr = &a; 
   
    /* Invalid: non-pointer variable Ican't store an address &a gives the address of 'a', which is of type int */

    int* ptr1 = &a; 
       /* 'ptr1' is a pointer to int, storing the address of 'a'
       '*ptr1' accesses the value at that address (value of 'a') */

    // int &ptr2 = &a; 
     /* Invalid: reference to int can't be initialized with int* (address)
     References must be bound to an int variable, not an address */

    int& ptr2 = a; 
    /* 'ptr2' is a reference (alias) to variable 'a'.
       It means 'ptr2' and 'a' refer to the same memory location.
       No separate memory is allocated for 'ptr2'. 
    */

    cout << "a: " << a << endl; 
    cout << "&a: " << &a << endl; // address of 'a'

    cout << "ptr1: " << ptr1 << endl;   // address stored in ptr1 (address of 'a')
    cout << "*ptr1: " << *ptr1 << endl; // value at the address ptr1 points to (value of 'a')
    cout << "&ptr1: " << &ptr1 << endl; // address of the pointer variable 'ptr1' itself

    // cout << "**ptr1: " << **ptr1 << endl; 
    /* Invalid: 'ptr1' is int*, not int**; cannot double dereference */
    // cout << "&&ptr1: " << &&ptr1 << endl; 
    /* Invalid: '&&' is not a valid operator for address-of address*/
    cout << "*&ptr1: " << *&ptr1 << endl;  
    /* '&ptr1' gets the address of ptr1
    '*' dereferences that address, giving back ptr1
    So this prints the same as ptr1 (address of 'a') */

    cout << "&*ptr1: " << &*ptr1 << endl;
      /* '*ptr1' dereferences ptr1 to get value of 'a'
      '&' gets address of that value, which is address of 'a'
       So this prints the same as ptr1 */

    cout << "ptr2: " << ptr2 << endl;   // prints value of 'a' (through reference)
    cout << "&ptr2: " << &ptr2 << endl; // prints address of 'a' (same as &a)

    // Summary of operators:
    // '*' -> dereference operator: access value at an address (pointer)
    // '&' -> address-of operator: get address of a variable

    return 0;
}
