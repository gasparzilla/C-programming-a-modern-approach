# Functions!!!!!

Each function in `C` is essentially a small program, with its own declarations and statements. These small programms allows us to avoid duplicating code that's used more than once.

## Defining and calling functions

Let's see a couple of examples before learning the definitions.

### Example: computing averages

`C` does not have an "average" function, but we can define our own:

```C
double average(double a, double b){
    return (a + b) / 2;
}
```

The basic structure here is:

```C
return_type function_name(parameters){
    declarations;
    statements;
}
```

We can then use the defined function in another program.

```C
#include <stdio.h>

// definition of functions should be before main()
double average(double a, double b){
    return (a + b) / 2;
}

int main(void){
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", x, z, average(x, z));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));

    return 0;
}
```

### Program: printing a countdown

Not every function has to return a value, to indicate this we use the return type `void`

```C
void print_countdown(int n){
    printf("T minus %d and counting.\n", n);
}
```

### Function definitions
