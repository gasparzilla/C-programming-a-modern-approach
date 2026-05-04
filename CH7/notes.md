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

## Character types









