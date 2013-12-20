An Introduction to GCC
======================

## Compiling a C program

### Compliling files independently


#### Compiling a simple C program

    gcc -Wall hello.c -o hello


##### Compiling multiple source files

    gcc -Wall main.c hello_fn.c -o newhello


##### Creating object files from source files

    gcc -Wall -c  main.c

    gcc -Wall -c hello_fn.c
    

##### Creating executables from object files

    gcc main.o  hello_fn.o -o hello


##### Link order of object files

On Unix-like systems, the traditional behavior of compilers and linkers is to search for exteranl functions from left to right in the object files spefified on the command line.

This means that the object file which contains the definition of a function should appear after any fies which call that function.

    gcc main.o  hello_fn.o -o helo
    // he 

With some compilers or linkers the opposite ordering would result in an error.

    cc main.o -o hello





    



