# Loops

A loop is a statement that will repeatedly execute statements. Every loop has a _controling expression_ that is evaluated of each _iteration_, if said expression is **True** the loop continues to be executed, otherwise it breaks.

There are three iteration statements: _while_, _do_ and _for_.

+ _while_ evaluates the expression before the loop body is executed.
+ _do_ evaluates the expression after the body is executed.
+ _for_ is convenient for loops that depend on an increasing or decreasing counter.

Three statements are used in conjunction with loops:

+ _break_ jumps out of a loop and transfers control to the next statement.
+ _continue_ skips the rest of the loop iteration.
+ _goto_ jumps to any statement witin a function.
+ _null_ can be used to create empty loops.

## The _while_ statement

The simplest of loops, it's basic structure is:

```C
while (expression) statement

while (i < n) i = i * 2;
```

the statement will be executed each iteration until the expression controlling the loop is false.

The folowing ecample computes the the smallest power of two greater or equal than a number n:

```C
i = 1;
while (i < n)
    i = i * 2;
```

We can use braces to add more satements to the loop:

```C
while (expression){
    statement 1;
    statement 2;
    ...
    statement n;
}
```

### Infinite loops

If the controlling expression is always True, the loop will never stop executing it's statements.

```C
while (1){
    statements;
}
```

### Program: printing a table of squares

Looping and using string conversion specifications _(`%10d`)_ help calculate and neatly display series of numbers as aligned columns.

```C
#include <stdio.h>

int main(void){
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n){
        printf("%10d%10d\n", i, i*i);
        i++;
    }

    return 0;
}
```

### Program: summing a series of numbers

We can sum a series of numbers entered by the usir by looping until the user inputs 0.

```C
#include <stdio.h>

int main(void){
    int n = -1, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers separate by spaces (0 to terminate)");
    
    while(n!= 0){
        scanf("%d", &n);
        sum += n;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
```

## The `do` statement

The `do` statement is closely related to the `while` statement, being essentially the same, but testing the control expression after the execution of the body.

```C
do statement while (expression) ;

do {
    statement_1;
    statement_2;
    ...
    statement_n;
}
while (expression);
```

### Program: calculating digits in an integer

```C
#include <stdio.h>

int main(void){
    int n, digits = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do{
        n\=10;
        digits ++;
    } while (n > 0);

    printf("The number has %d digit(s).\n", digits);
    return 0;
}
```

## The `for` statement

This statement is ideal for loops that have a counting variable, but also works for other kinds of loop. It's structured like:

```C
for { expression_1 ; expression_2 ; expression_3} statement
```

Where `expression_1` is an initialization step performed once at the start of the loop, `expression_2` is a control expression checked every loop, and `expression_3` is an operation to be performed at the end of each iteration.

In `C99` expression_1 can be a _declaration_ expression (`int i = 0` instead of `i = 0`), ensuring the variable used can't be accessed outside of the loop.

### `for` statement idioms

+ _counting up from 0 to (n-1)_: `for (i = 0; i < n; i++)`
+ _counting up from 0 to n_: `for (i = 0; i <= n; i++)`
+ _counting down from n to (0)_: `for (i = n; i >= 0; i--)`
+ _counting down from 0 to (1)_: `for (i = n; i > 0; i--)`

Watch out for off by one errors.

## The `break` statement

This statement transfers control out of a loop, jumping out out of a `while`, `do` or `for; this is useful when needing to check for more conditions not covered by the control expression.
