#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);   // Read entire line including spaces
    cout << line << endl; // Print the line
    return 0;
}