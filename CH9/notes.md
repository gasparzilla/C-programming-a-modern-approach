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

```C
return_type function_name( parameters ){
    declarations;
    statements;
}
```

The return type of funtions can be anything but arrays. `void` specifies the function will not return anything.

After the function name come the parameters, each parameter must have its type specified.

### Function calls

Functions are **called** by stating their name with a list of arguments encsased in parentheses.

functions that return non-void values are generally assigned to a variable, but they can be discarded ommiting the assignation portion of the statement. void functions are called without assigning their value to a variable.

### Program: testing if a number is prime

```C
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n){
    int divisor;

    if (n <= 1){
        return false;
    }

    for (divisor = 2; divisor * divisor <= n; divisor++){
        if (n % divisor == 0){
            return false
        }
    }

    return true
}

int main(void){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_prime(n)){
        printf("Number is prime.\n");
    }
    else{
        printf("Number is not prime.\n");
    }

    return 0;
}
```

### Function declarations

declaration of programs are a way to help the compiler understandthe function before it is defined, when it is impossible to 
