/* E ASMR */


/*  
Type	   |    Scope	        |   Lifetime	                   |  Example
---------------------------------------------------------------------------------------------------------------------------------------------
extern	   |    Global          |   Entire program runtime	       |  extern int [Global_Var];

(Used to declare a global variable without allocating memory in the current file, indicating that the variable is defined elsewhere 
(in another .cpp file), allowing multiple files to share the same global variable without redefinition errors)
---------------------------------------------------------------------------------------------------------------------------------------------
auto	   |    Block/Local    	|   Within the block	           |  int add(){auto int x = 5;}

(In modern C++, auto as a storage class specifier is optional and rarely used; any variable declared inside a function is by default automatic 
(has automatic storage duration), so we usually don’t write auto explicitly.)
---------------------------------------------------------------------------------------------------------------------------------------------
static	   |    Local        	|   Entire program runtime	       |  void counting() {static int count = 0; count++;}

(Preserves a variable’s value even after the function ends, making it useful for functions that are called multiple times and need to remember 
previous states.)
---------------------------------------------------------------------------------------------------------------------------------------------
mutable    |    (C++ only)	    |   Class member	     	       |  class calculation {public: mutable int x; void add const() {// allows x to be atered};

(Allows modification of data members or object data members inside constat member function.)
---------------------------------------------------------------------------------------------------------------------------------------------
register   |    Block/Local    	|   Within the block	           |  void add() {register int i = 0;}

(Declared inside fx, that signals cpu to store variable inside register instead of ram for speed optimization.)
 */