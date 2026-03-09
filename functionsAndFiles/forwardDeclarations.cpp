#include<iostream>

int main()
{
    std::cout<<"The sum of 3 and 4 is "<<add(3,4)<<std::endl;
    return 0;
}

int add(int a,int b)
{
    return a + b;
}

/* The reason this program doesn’t compile is because the compiler compiles the contents 
of code files sequentially. When the compiler encounters the call to the add function, 
it hasn’t yet seen the definition of the add function.*/

/*To fix this One way to address the issue is to reorder the function definitions so 
add is defined before main*/

/*We can also fix this by using a forward declaration.*/

#include <iostream>

int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}


/* Ease with multiple files 
In Larger projects, functions are often defined in separate files.
in such cases, we can use forward declarations to allow functions in one file 
to call functions defined in another file without needing to include the 
entire definition of the functions.
This help to reduce compilation dependencies and improve build times;

*/