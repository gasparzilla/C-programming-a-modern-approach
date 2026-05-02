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

### Program




