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

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i, i)
    # |40|   40|40   |  040|
    printf("|%10.3f|%10.3e|%-10g|\n, x, x, x, x")
    # |    839.210| 8.392e+02|839.21     |
}

**what do the conversion specifications do**:

- %d: displays the integer using minimum amonunt of space.
- %5d: displays the integer padding with spaces to the left until at least 5 characters are shown.
- %-5d: displays the integer padding with spaces to the right until at least 5 characters are shown.
- %5.3d: displays the integer padding with zeros until 3 numeric characters are shown and with spaces until 5 character appear in total.
- %10.3f: displays the float in fixed decimal form, using 10 characters in total (padding t the left with spaces) and showing three decimals. (the dot counts as a char).
- %10.3e: prints the float in exponential form with 3 digits after the decimal point and padding to the right with spaces until 10 chars.
- %-10g: prints the float in decimal or exponential form, using 10 characters and padding with spaces to the left.

## Escape Sequences

An escape sequence enable strings to contain characters that otherwise cause problems in the compiler, such as backspaces, new lines, quotes, tabs, etc...

The compiler interprets them as actions to perform upon printing, like a beep (\a), moving the cursor backwards (\b) and to the next line (\n).

A string can contain any number of escapesequences.

## the `scanf` function
 
`scanf` is a function used to read input according to a particular format. Conversions are essentially the same as in scanf.

```C
int i,j;
float x,y;

scanf("%d%d%f%f, &i, &j, &x, &y")
```

In this example, `scanf` will read the line, converting the inputed characters to the number they represent and assign the values to the variables provided. `scanf` is mostly avoided, replaced by reading data in character form and converting to number later.

### how does `scanf` work:

`scanf` is a pattern matching function that tries to match up groups of input characters with conversion specifications. It processes the information in the input string, strarting at the left, locating an item of the appropiate type in it, skipping blank spaces like spaces, tabs or newlines as necessary. `scanf` reads the item, stopping if it cant possibly be asigned to the data type.

If `scanf` fails or is unable to parse correct input data it stops immediately without looking at the rest of the string.

The rules it follows to recognize an integer or floating point are as follows:

- **int:** it should start with a digit, or a `+` or `-` sign, followed by digits until a non-difit number appears
- **float:** it should start wit a digit or a `+` or `-` sign, followed by a series of digits that can contain a decimal point `.` followed by an optional exponent consisting of the letter `e` or `E` an optional sign and one or more digits.

The `%e`, `%f` and `%g` conversions are intercheangable when used with scanf, following the same rules.

When `scanf` finds a character that can't be part of the current item, the character is put back to be read again during scanning of the next item

### Program> adding fractions

```C
#include <stdio.h>
int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1*denom2+num2*denom1;
    result_denom = denom2*denom1;

    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
```

