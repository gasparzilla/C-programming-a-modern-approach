# Fundamentals of C

## Writing a simple program

C requires little boilerplate

```C
#include <stdio.h>

int main(void){
    printf("To C or not to C: that is the question./n");
    return 0;
}
```

`#include <stdio.h>` this line includes the standard input output library.

The executable code goes into the `main()` function.

`printf()` is a function influded in the standard input output library used to produce nicely formatted output.

The program ends with a `return` command that indicates termination.

### Compiling and linking

Getting the program to run is a little more complicated than just running it. After storing the contents in a file, the program must be *compiled*, converted into machine code so that the computer can execute it. This is accomplished commonly in three steps.

1. *Preprocessing*: the program is given to a preprocessor that obeys directives, adding and making modification to the program.
2. *Compiling*: the preprocessed program is compiled (translated into machine instructions).
3. *Linking*: a linker combines the object code produced by the compiles with any additional code needed to create an executable program. This additional code includes library functions that are used in the program.

This process is automated and integrated into a single step when compiling. 

Several compiler exist, such as `cc` the UNIX compiler, `gcc` the GNU C compiler.

### IDEs

Integrated development environments are software packages that allow to edit, compile, link and execute programs in the same environment. No longer being discussed in the book.

## The general form of a simple program

```C
// directives

int main(void){
    // statements
}
```

This template is a basic representation of a generalized program in C. **Directives** are commands that modify the program prior to compilation, **functions** are blocks of exectuable code (like `main()`) and **statements** are commands to be performed when the program is run.

### Directives

Before a C program is compiled, it is first edited by a **preprocessor**. Commands intended for the preprocessor are called **directives**.

The `#include` directive is used to include libraries into the program before is compiled.

Directives allways start with the `#` character, and it is a distinctive feature of them. They are one line long and they dont need a semicolon or any special marker at the end

### Functions

Subroutnes or procedures, they are the building blocks of programs.

A **function** in C is a series of statements that have been grouped together and given a name. Some compute values and some don't.

`main()` is a special function, it's called automatically when the program is executed. The `int` before it's definition meants it returns an integer value and the `void` within it's parentheses means it takes no arguments.

The `return 0;` at the end causes the `main()` function to terminate and return the value 0 to the OS, meaning normal program termination. 

### Statements

**Statements** are commands that will be executed when the program runs. C requires that each statement ends with a semicolon.

## Comments

Comments are a way to document code, explaining what the functions and statements do in the program.

An example of standard code with comments:

```C
/* Name: pun.c */
/* Purpose: prints a bad pun */
/* Author: K. N. King */

/* directives */
#include <stdio.h>

/* main function */
int main(void){
    /* printing pun */
    printf("To C or not to C: that is the question./n");
    return 0;
}
```

Another style of comment is using double slashes `// a comment like this`, these comments do not require an indicator at the end of the line

## Variables and Assignment

Variables are a way to store data temporarily while the program is being executed.

### Types

Each variable must have a **type**, which specifies what kind of data will be stored in it.

### Declarations

Variables bust be **declared**, described to the compiler, before they can be used. To declare a variable we must set its **type** and its **name**

```C
int variable_1;
float variable_2;
char variable_3;
```

If you are going to declare multiple variables of the same tipe, the declarations can be combined.

```C
int x, y, z;
float xx, yy, zz;
char ch;
```

### Assignment

A variable can be given a value by **assignment** like in the following statement:
```C
x = 8;
xx = 8.00123093849;
ch = 'a';
```

If assigning a value to a variable that is constant and float, you must append an `f` at the end of the number.

```C
yy = 12.34567f;
```

Once a value has been assigned to a variable, the variable can be used to assign value to other variables.

```C
y = 2*x;
zz = xx+yy;
```