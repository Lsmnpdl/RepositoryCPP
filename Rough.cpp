#include <iostream>
using namespace std;

int main() {
    int value = 65;

    // reinterpret int* as char* to look at bytes
    char* bytePtr = reinterpret_cast<char*>(&value);

    cout << "Integer value: " << value << endl;
    cout << "Bytes in memory (hex): ";
    for (size_t i = 0; i < sizeof(int); ++i) {
        cout << hex << (0xFF & static_cast<unsigned int>(bytePtr[i])) << " ";
    }
    cout << endl;

    return 0;
}
