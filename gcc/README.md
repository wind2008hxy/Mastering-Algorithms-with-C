An Introduction to GCC
======================

Compiling a simple C program

    gcc -Wall hello.c -o hello


Compiling multiple source files

    gcc -Wall main.c hello_fn.c -o newhello


Creating object files from source files

    gcc -Wall -c  main.c

    gcc -Wall -c hello_fn.c
    

Creating executables from object files

    gcc main.o  hello_fn.o -o hello






