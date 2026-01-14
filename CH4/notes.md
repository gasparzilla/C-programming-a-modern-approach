# CHAPTER 4: Expressions

one of C's distinguishing characteristics is its **emphasis** on expressions rather than statements. The simplest expressione are variables and constats.

- A variable represents a value to be computed as the program runs
- A constant represents a value that doesnt change

More complicated expressions apply **operators** (other kind of expressions), the basic tools for building expressions.

- **arithmetic operators** including substraction, addition, multiplication and addition
- **relational operators** perform comparisions
- **logical** operators build on conditions that can be avualated as true or false

There are dozens of other operators, that will be introduced gradually.

## 4.1: Arithmetics Operators

| Unary | Binary      |
| ----- | ------------|
|       | additive | multiplicative |
| unary plus + | addition + | multiplication * |
| unary minus - | substraction - | division /  |
|               |                | remainder % |

Unary operators require one operand, binary operators require two.

```C
# example of usage of unary operators
i = +1
j = -i
```

unary plus does nothing, unary minus changes the sign of the value.

Dont worry too much about operator precedence, use parentheses dummy.

### Program: Computing a UPC Check Digit

An Universal Product Code identifies both manufacturer and product with a code, they are composed of 12 digits split into four groups:

- a single digit representing a type of item
- five digits representing the manufacturer
- five digits representing the product
- a single digit for validation

the last digit is computed using the following steps:

- sum the 1st, 3rd, 5th, 7th, 9th, 11th digits
- sum the 2nd, 4th, 6th, 8th, 10th digits
- multiply the first sum by 3 and add it to the second one
- substract 1
- compute the modulo 10
- substract from 9

write a program that does that:

```C
#include <stdio.h>

int main(void){
    int i1, i2, i3, i4, i5, sum_1, sum_2, total;

    printf("enter the first single digit: ");
    scanf("%1d", &sum_1);
    printf("enter the five digits corresponding to the manufacturer: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    sum_1 = sum_1 + i2 + i4;
    sum_2 = i1 + i3 + i5;
    printf("enter the five digits corresponding to the product: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    sum_1 = sum_1 + i1 + i3 + i5;
    sum_2 = sum_2 + i2 + i4;
    total = 9 - ((((3 * sum_1) + sum_2) - 1) % 10);
    
    printf("Check digit: %d\n", total)

    return 0;
}
```



