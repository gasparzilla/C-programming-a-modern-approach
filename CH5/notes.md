# Selection statemente

C hast many operators but few statements. There are three categories of statements:

- **Selection Statements:** the `if` and `switch` statemetns allow a program to select a particular execution path from a set of alternatives.
- **Iteration Statements:** the `while`, `do` and `for` statements support iteration.
- **Jump Statements:** the `break`, `continue` and `goto` statements cause an unconditional jump to some other place in the program.

The only other statements are **Compound Statements** that group several statements from those three categories

## Logical expressions

Most statements must test if an expression is true or false, in many languages, these statements would have a special boolean or logical type. in C, this is partially true, as the only two possible values are 1 or 0 (`true` or `false`).

### Relational operators

- `<` less than
- `>` greater than
- `<=` less than or equal
- `>=` greater than ot equal

these operators can be used to compare number types between each other. The precedence of this operator is lower than all arithmetic operators.

!Warning: the expression `i < j < k` is valid but means `( i < j ) < k` where `( i < j )` will take the values 1 or 0.

### Equality operators

- `==` equal to
- `!=` not equal to

these operators are also left associative and evaluate to a boolean 1 or 0. These operators have a lower precedence than relational ones.

### Logical operators

- `!` logical negation
- `&&` logical and
- `||` logical or

The or and and operators perform a short circuit, only evaluating terms until the ocndition is inequivocally true or false (the left operand is not evaluated if the anwser is already deduced)

## The `if` statement

The `if` statement allows a program to choose between two alternatives by testing the value of an expression.

`if (expression) statement`

Often the expression ina an `if` statement will test wether a vriable falls within a range.

### Compound statements

By putting breces arround a group of statements, we can force the compiler to trear it as a single statement.

`if (expression) {statements}`

### The `else` clause

An `if` statement may have an `else` clause, where the statement following the `else` will be executed ig the expression evaluates to 0

`if (expression) {statements} else {statements}`

### Cascaded `if` statements

when evaluating a series of tests or conditions, a cascading series of ifs can be useful.

```C
if (expression)
    {statements}
else if (expression)
    {statements}
else if (expression)
    {statements}
...
else
    {statements}
```

This kind of cascading statement is not a different statement, it's just a concatenation of ordinary if statements.

### program: Calculating a Broker's commission

stocks sold via broker generate a commission with a rate depending on the transaction size.

```C
#include <stdio.h>

int main (void){
    float commission, value;

    printf("Enter value of stock trade: \n");
    scanf("%f", value);

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;
    
    printf("Commission: $%.2f\n", commission);
    return 0;
}

```

### The dangling `else` problem

consider the following example:

```C
if (expression)
    if (expression)
        {statements}
else
    {statements}
```

Indentation suggests the `else` belongs to the outer if statement, but it really belongs to the nearest if expression that has not been paired with an else, behaving like:

```C
if (expression)
    if (expression)
        {statements}
    else
        {statements}
```

To avoid having a dangling `else`, we can define boundaries, enclosing the inner statement with brackets:

```C
if (expression){
    if (expression)
        {statements}
    }
else
    {statements}
```

### Conditional Expressions

Besides the `if` statement, there exists a special conditional operator (also known as the ternary operator) that allows an expression to produce one of two values depending on a condition:

`expression_1 ? expression_2 : expression_3`

This conditional expression is equivalent to "if expression\_1 is true then expression\_2, else expression\_3"

It's best to avoid these expressions to avoid terse code

### Boolean values in C89

There is no boolean type defined in the C89 standard, so it's common to define macros that are used as boolean values to compare to, so that it's clear that the variable you will be comparing to them is being used as boolean:

```C
#define True 1
#define False 0
```

Or, you can define a type Bool easily with mactos, to clarify the use of the variable more explicitly:

```C
#define Bool int
```

### Boolean values in C99

99 introduced the `_Bool`, a binary integer type that can only be 0 or 1. This type can also be used by including the header `<stdbool.h>` that provides the macro `bool` maping to `?Bool`, `true` that maps to 1 and `false` that maps to 0.

### The `switch` statement

A cascading if can be used to compare an expression against a series of values, or multiple expressions against multiple conditions. `switch` is an alternative to a cascading `if`.

```C
switch (expression){
    case constant-expression : statements
    ...
    case constant-expression : statements
    default : statements
}
```

the components of the `switch` statement are:

- **Controlling expresson** The word switch must be followed by an integer expressoin surrounded by parentheses. Characters are treated as int so they can also be used. Floating point variables and strings do not quelify to be a controlling expression for the `switch` statement.

- **case labels** each case begins with a label with the form `case constant-expression :` where the `constant-expression` is an expression that can't contain variables or function calls and must evaluate to an integer.

- **statements** after each case label, there can come a number of statements where the last statement in the group is usually a `break` (to exit the switch block).

Duplicate and more than one case label are not allowed, but several can precede the same group of statements, generally defined as follows to make it more clear:

```C
switch (grade) {
    case 7: case 6: case 5: case 4:
        printf("Passing");
        break;
    case 3: case 2: case 1: case 0:
        printf("Failing");
        break;
    default:
        printf("Illegal grade");
        break;
}
```
