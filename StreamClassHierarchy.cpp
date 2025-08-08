/* 
        ios_base
            |
           ios
          /    \
   istream     ostream
      \         /
      iostream (console I/O)
         |
       fstream (file I/O)
     /         \
ifstream      ofstream

ios_base; ios; istream; ostream; iostream; fstream; ifstream; ofstream

// C++ Stream Class Hierarchy Summary


|Class    |    Definition                             | Use Case       | Feature                           |
|---------|-------------------------------------------|----------------|-----------------------------------|
|ios_base | Base for all I/O streams; manages state   | Set formatting | Error state methods like .fail()  |
|ios      | Derived from ios_base; adds buffer control| Internally used| Manages stream buffer & format    |
|istream  | Input stream class                        | cin >> x;      | Overloaded >> operator            |
|ostream  | Output stream class                       | cout << x;     | Overloaded << operator            |
|iostream | Inherits istream + ostream                | iostream obj   | Input and output support together |
|fstream  | File input and output                     | fstream file   | Read and write from same file     |
|ifstream | File input only                           | ifstream fin   | Read from files                   |
|ofstream | File output only                          | ofstream fout  | Write to files                    |


*/