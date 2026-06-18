/* Syntax errors are basically when a statement is not written correctly
// as per language rules.
// and Semantic errors are when the statement is written correctly but 
// it violates the other rules of the language or the logic of the program.
// for ex  int a; int a; this is a semantic error because the statement 
 is written correctly but it violates the rule of declaring a variable with the same name twice in the same scope.*/


/*We also may debug programs by generally some basic ruls
    1. Placing prints
    2. prints values
    3. commenting out some parts of the code

*/
// using preprocessor directives to debug the code

#include<iostream>

#define ENABLE_DEBUG // now we simply comment out or not comment out this line to enable or disable debug mode

int main()
{
    int a = 5;
    int b = 0;

    #ifdef ENABLE_DEBUG
    std::cout<<"Debug mode we are here"<<std::endl;
    #endif

    return 0;
}

// Also we may use loggin like to write logs in file so that it would be easy to figgure out later 
// what happened  at that time 
/*
[C++ Interface Layer ]  ==>  std::clog (Instance of std::ostream)
           ||
[ C++ Buffering Layer ]  ==>  std::streambuf (Manages the internal RAM array)
           ||
[ C Runtime Layer ]      ==>  stderr (The classic C standard error FILE* pointer)
           ||
[ OS Kernel Layer ]      ==>  File Descriptor 2 (The low-level OS file handle)
 */

 /*
 How it writes to an actual file
 When you execute ./my_program 2> log.txt, you are interacting directly with Layer 4.
 Before your program even begins executing, the OS command shell reads the 2> command.
 The OS opens an actual file named log.txt on your disk and gets a file handle for it.
 The OS replaces File Descriptor 2 of your program’s process with the handle pointing 
 to log.txt.When std::clog flushes its data, it issues the 
 system call to File Descriptor 2 as it always does. 
 It has no idea the destination changed; the OS seamlessly routes those bytes into 
 the physical text file instead of the terminal display.
 */