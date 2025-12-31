# Formatted Input/Output

`scanf` and `printf` are two of the most used functions in `C`. They are both powerful and tricky to use.

## The `printf` function:

This function is designed to display the contents of a string (known as a _format string_).

The values to display could be constants, variables or more complicated expressions. 

The _format string_ can contain both **ordinary characters** and **conversion specifications** (that begin with the `%` character), these conversion specifications are placeholders representing a value to be filled during printing. 

- `%d` converts an int from binary to a string of decimal digits
- `%f` converts a float from binary to a string of decimal digits

Characters are printed exactly as they appear in the string and conversion specifications are replaced by the values to be printed

```C
int i, j;

float x, y;

i = 10;
j = 20;
x = 43.1235f;
y = 5423.0f;

printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
```

this example produces the string:

`i = 10, j = 20, x = 43.1235000, y = 5423.000000`

## Conversion Specifications

conversion specifications can have the form `%m.pX` or `%-m.pX` where `m` and `p` are integer constants and `X` is a letter. Both `m` and `p` are optional and if `p` is ommited then the dot should be ommited as well.

`m` is the **minimum field width** specifies the minimum number of characters to print.

`p` is the **precision** and is not easily described since it depends on the definition of `X`

The most common specifiers for numbers are:

- `%d`: displays an integer in decimal form, `p` indicates the minimum number of digits to display (extra zeros are added at the begginning of the number if necessary), its default value is 1
- `%e`: displays a float in exponential format (scientific notation). `p` indicates how many digits should appear affter the decimal point (default value is 6). If `p` is 0 the decimal point is not displayed.
- `%f`: displays a float in "fixed decimal" format, without an exponent, `p` has the same meaning as in `%e`. 
- `%g`: displays a float in either exponential or fixed depending on the number. `p` indicates the maximum number of significant digits to be displayed. Unlike `%f` conversion the `%g` conversion won't show trailing zeros. _this is useful for numbers whose size can't be predicted.

## using `printf` to format numbers

```C
#include <stdio.h>

int main(void){
	int i = 40;
	float x = 839.21f;

	printf("")
}
```
