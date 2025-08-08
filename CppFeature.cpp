#include <iostream>
using namespace std;

// ----------- Abstraction via Base Class -------------
class Animal {
public:
    virtual void speak() = 0; // Pure virtual function → Abstraction
    virtual ~Animal() {}      // Virtual destructor
};

// ----------- Encapsulation & Data Hiding -------------
class Cat : public Animal {   // Inheritance from Animal → I
private:
    string name;              // Data hiding: private variable

public:
    Cat(string n) {
        name = n;
    }

    void speak() override {   // Polymorphism: overridden method → P
        cout << name << " says Meow!" << endl;
    }
};

class Dog : public Animal {   // Inheritance → I
private:
    string name;              // Data hiding

public:
    Dog(string n) {
        name = n;
    }

    void speak() override {   // Polymorphism
        cout << name << " says Woof!" << endl;
    }
};

// ----------- Function to demonstrate Message Passing -------------
void makeItSpeak(Animal* a) {
    a->speak();  // Message passing: object responds to "speak" message
}

// ----------- Main Function -------------
int main() {
    // Object Creation & Initialization
    Cat myCat("Kitty");
    Dog myDog("Husky");

    // Message passing & Polymorphism
    makeItSpeak(&myCat);  // Calls Cat's speak()
    makeItSpeak(&myDog);  // Calls Dog's speak()

    return 0;
}
