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

### Printing the value of a variable

When using `printf()` to display text, we can use the following notation to display the value of variables:

```C
// when printing int variables
int h = 10;
printf("Height = %d\n", h);

// when printing floats
float d = 5810.534f;
printf("Distance = %f\n", d);

// configuring printf() to shou a specific number of decimals
// 2 decimals
printf("Distance = %.2f\n", d);
// n decimals
printf("Distance = %.nf\n", d);

// displaying multiple variables
printf("Height = %d\n Distance = %.2f\n", h, d);
```

### _Program_ Computing the dimensional wheight of a box

```C
#include <stdio.h>

int main(void){
    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;
    int weight = (colume + 165) / 166;

    printf("Dimensions (inches): %dx%dx%d\n", length, width, height);
    printd("Volume (cubic inches): %d\n", volume);
    printf("Dimensional Weight (pounds): %d\n", weight);

    return 0;
}
```

### Initialization

some variables are automatically set to zero when a program begins to execute, but most are not. A variable that does't have a default is **uninitalized**.

initialization of a variable can be achieved individually or in groups:

```C
int height = 8;

int length = 12, width = 10;
```

Each variable requires it's own initializer

## Reading Input

To obtain input we use the scanf function (the counterpart to printf) to scan formatted (the `f` in `scanf` and `printf`) data.

```C
// scanning an int
scanf("%d", &i);
// scanning a float
scanf("%f", &x);
```

### _Program_ Dimensional volume revisited

```C
#include <stdio.h>

int main(void){

    int height,length,width;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    int volume = height * length * width;
    int weight = (colume + 165) / 166;

    printf("Dimensions (inches): %dx%dx%d\n", length, width, height);
    printd("Volume (cubic inches): %d\n", volume);
    printf("Dimensional Weight (pounds): %d\n", weight);

    return 0;
}
```

this program will fail if non-numeric input is entered.

## defining names for constants

Constants can be set using macros in the preprocessing step. When a program is compiled, the ocurrences of the constant set during the preprocessing step will be replaced in the code with its value.

```C
#define RECIPROCAL_OF_PI (1.0f / 3.141596f)

int main(void){
    float radius = 10.1f;
    float area = PI * radius * radius;
    float perimeter = 2.0f * PI * radius;
    return 1;
}
```

when defining constants with procedures, these should be encased in parentheses

```C
#define RECIPROCAL_OF_PI (1.0f / 3.141596f)

int main(void){
    float perimeter = 111.1f;
    float radius = perimeter / (2.0f * PI)
    return 1;
}
```

The use of uppercase text is a convention and not a requirement.

## Identifiers

The names used to define variables, functions, macros and other entities are called identifiers. These identifiers can contain letters, digits and underscores. **Identifiers must begin by a letter or undescore**.

Identifiers are **Case Sensitive**.

