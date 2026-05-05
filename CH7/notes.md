# Basic Types

Until now, only a copule of types have been used: `int`, `float`, `char` and `_Bool`; this chapter covers some types in C and some operators related to them.

## Integer Types

C supports two different numeric types:

- **integer types:** whole numbers, representing integers.
  - **signed integers:** can be positive or negative.
  - **unsigned integers:** can only be positive. Will come back in chapter 20.
- **floating point types:** can have a fractional part, representing real numbers.

Integers come in different sizes, combined with the type of sign, we get six possible combinations:

| type | size | smallest value | largest value |
| --- | --- | --- | --- |
| `short int`          | 16b | -(2^15) | (2^15) - 1 |
| `unsigned short int` | 16b | 0       | (2^16) - 1 |
| `int`                | 32b | -(2^31) | (2^31) - 1 |
| `unsigned int`       | 32b | 0       | (2^32) - 1 |
| `long int`           | 64b | -(2^63) | (2^63) - 1 |
| `unsigned long int`  | 64b | 0       | (2^64) - 1 |

In C99 there are two additional integer types, `long long int` and `unsigned long long int` that are at least 64b, and some compiles provide 128b compatibility.

### Integer Constants

Immutable integers can be defined in decimal, octal or hexadecimal base.

- `decimal` constants contain digits between 0-9 and **must not** begin with a `0`
- `octal` constans contain digits between 0-7 and **must** begin with a `0`
- `hexadecimal` constants contain digits between 0-f and bust begin with `0x`

_Octal and hex are useful when writing low level programs._

The type of a decimal constant is normally `int`; if its too long to store as `int`, it will be stored as `long int`; in case `long int` is too small, it will be stored as `unsigned long int`. You can force the compiler to treat it as a long integer by appending the letter `L` at the end of the constant. Constants can also be orcet to be stored as unsigned by appending the letter `U` at their end.

### Integer overflow

overflow happens when the result cant be represented by the type because it would require too many bits.

- unsigned integer overflow behaivour is undefined
- signed integer overflow is defined as the same as modulo $2^n$ where n is the number of bits used to store the result (it overflows to 0 when surpassing the maximum value).

### Reading and writing integers

When changint the type of a variable, you must also check how this will change the behaivour of the rest of the program. For example, how `scanf` and `printf` are configured, since format strings are type dependent.

- `unsigned` integers:
  - `"%u"` used to read and write unsigned integers in base 10
  - `"%o"` used to read and write unsigned integers in octal
  - `"%x"` used to read and write unsigned integers un hex
- `short` integers:
  - `"%h_"` affix an `h` to `d`, `o`, `u` or `x`
- `long` integers:
  - `"%l_"` affix an `l` to `d`, `o`, `u` or `x`
- `long long` integers:
  - `"%ll_"` affix an `ll` to `d`, `o`, `u` or `x`

### Program: summing a series of numbers v2

```C
#include <stdio.h>

int main(void){
    long n, sum = 0;

    printf("This progrm sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%ld", &n);
    while(n != 0){
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sum is %ld\n", sum);

    return 0;
}
```

Changing the type of variable of `n` and `sum` to `long` makes it so the sum can go on for longer.


## Floating types

Real numbers are stored on floating type variables, there are three types of floating point variables:

- `float`: single precision floating point
- `double`: double precision floating point
- `long double`: extended precision floating point

Floating point type variables mostly follow **IEEE 754** standard:

| Type | smallest positive value | largest value | precision |
| --- | --- | --- | --- |
| `float`  | 1.17549 x 10^(-38)  | 3.40282 x 10^(38)  | 6 digits  |
| `double` | 2.22507 x 10^(-308) | 1.79769 x 10^(308) | 15 digits |

C99 also has complex floating types: `float_Complex`, `double_Complex` and `long double_Complex`.

### Floating constants

There are multiple ways to write floating constants; all must contain a decimal point and/or an exponent. The following examples are all valid:

`57.0 57. 57.0e0 57E0 5.7e1 570E-1`

by deafult, floating constants are stored as double precision. To force the compiler to store a floating constant as float or double float, one must suffix `f` or `l` respectively to the number. C99 allows for hexadecimal floating point numbers, starting with the prefix `0x`.

### Reading and writing floating point numbers.

`double` types need the letter `l` in front of the convention specifications `%e`, `%f`, `%g`. This is only needed only during `scanf` since normal spacifications can be used in `printf` by `floats` or `double` types. C99 allows the use of the prefix `l` in `scanf`.

`long double` types need the letter `L` in front of the convention specifications, both on `scanf` and `printf`.

## Character types

`char` or character types vary from one computer to other _(outdated?)_.

a variable of type `char` can be assigned any single character.

```C
char ch

ch = 'a';
ch = 'A';
ch = '0';
ch = ' ';
```

### Operations on characters

Characters are small integers, for example, ASCII characters can be represented with integers from 0 to 127.

When a character appears in a computation, `C` simply uses its integer value (for operations and comparisons).

### Signed and unsigned characters

signed and unsigned characters are a result of using `int` as the underlying type, hence the ability to sign or un-sing it.

### Escape sequences

**Character escapes:**

| Name | Sequence |
| --- | --- |
| Alert | \a |
| Backspace | \b |
| Form feed | \f |
| New Line | \n |
| Carriage Return | \r|
| Horizontal Tab | \t |
| Vertical Tab | \v |
| Backslash | \\ |
| Question mark | \? |
| Single quote | \' |
| Double quote | \" |

**Numeric escapes**

This type of escapes allow for the use of characters outside of ASCII.

- _octal escape sequence:_ consists of the `"\"` character followed by an octal number of at most three digits (maximum 377).
- _hexadecimal escape sequence:_ consists of `"\x"` followed by a hexadecimal number.

### Character handling functions

- `toupper(char ch):` converts `ch` to UpperCase
- more are described in CH23???

### Reading and writing characters

The `%c` conversion specification allows `scanf` and `printf` to read and write single characters. `scanf` doesn't skip whitespaces, unless told so with an intentional whitespaceeeeeeeeeee before the conversion specification:

```C
char ch;
scanf(" %c", &ch);
```

### using `getchar` and `putchar`

C provides other ways to read and write characters.

`putchar(char ch)` writes a single character.

`getchar(void)` reads a single characters and returns it. To store it you need to assign it to a variable:

```C
char ch;
ch = getchar()
```

Here, a small comparison of using `scanf` vs `getchar` to search for a character:

```C
// using scanf
do {
    scanf("%c", &ch);
} while (ch != '\n');

// using getchar
do {
    ch = getchar();
} while (ch != '\n');

// moving getchar into the controlling expression
while ((ch = getchar()) != '\n')
    ;

// without using the variable ch
while (getchar() != '\n')
    ;
```

### Program: Determining the length of a message

```C
#include <stdio.h>

int main(void){
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != "\n"){
        len++;
        ch = getchar();
    }
    printf("Your message was %d character/s long.\n", len);
}
```

### Type conversion

For a computer to cpmute an operation, both operands must be the same size and stored in the same way _(adding two 16b integers can be done directly, but not a 16b int and 32b float)_.

`C` allows basic types to be mixed in expressions, automatically converting types to the adequate one in the context of the operation; for example:

- adding a 16b `short` and a 32b `int` automatically converts the 16b value into a 32b value.
- adding an `int` and a `float` prompts a conversion from `int` into `float` _(this is a bit more complicated since both types are stored in very different ways)_.

Implicit conversions are done without the programmers input, these happen when:

- operands in arithmetic or logical operators don't have the same type.
- when the type of expression on the _right_ side of an assignment does not match the type of the variable on the _left_.
- when the type of an argument in a function does not match the type of the parameter.
- when the type of the expression in the return does not match the type of the function.

### Usual arithmetic conversion

These convertions are applied to the operands of most operators _(arithmetic, relational and equality operators)_. Promotion happens in two ways depending on the type of the operands involved:

- **either operand is floating point**:
  `float` -> `double` -> `long double`
- **when neither operand is floating point type**:
  `int` -> `unsigned int` -> `long int` -> `unsigned long int`

### Conversion during assignment

`C` follows a simple rule, the expression on the right side is converted to the type of the variable on the left; if the variable type is at least as wide as the expression, there won't be any problem.

Assigning a value to a varibale that is narrower will meaning less or worse result.

### Implicit conversions in C99

### Casting

`C` provides _casts_, a way to control type conversions:

```C
(type_name) expression
```

The following example shows how to extract the fractional part of a floating point variable using casts:

```C
float f, frac_part;

frac_part = f - (int) f
```

Explicit type conversions via casting allows for documentation of conversion that would happen anyway. They also enable us to overrule the compiler and force specific conversions:

```C
float quotient;
int dividend, divisor;

// this operation stores the result of the division of two integers as a float
quotient = dividend / divisor

// if we want the conversion to happen BEFORE the division
quotient = (float) dividend / divisor
// equivalent to
quotient = ((float) dividend) / divisor
``` 

Casting is an unary operator so it takes precedence over arithmetic operators.

Casting also is usefull or necessary to avoid overflow:

```C
long i;
int j = 10000;

// this could overflow in some machines
i = j * j

// a solution
i = (long) j * j
```

### Type definitions

We can use the operator `typedef` to define new types based on preexisting types:

```C
typedef int Bool;

Bool flag;
```

This method of defining types is useful to make the program more understandable.

## The `sizeof` Operator

This operator allows a prorgam to edtermine how much memory is required to store values of a particular type.

```C
sizeof (type_name);
```

It returns an unsigned integer representing the _number of bytes_ required to store a value belonging to the name type.

Printing values of `sizeof` can be tricky since its type is implementation-defined; it's better to always convert to an `unsigned long` and then print using the `%lu` conversion.

```C
printf("Size of int: %lu\n", (unsigned long) sizeof(int));
```

C99 has the conversion specification `%zu` that allows the direct printing of type `size_t`

```C
printf("Size of int: %zu\n", sizeof(int));
```

