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


