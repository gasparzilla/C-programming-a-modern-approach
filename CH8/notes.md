# Arrays

Beside scalar variables, `C` supports aggrgate variables, that can store _collections_ of values: **arrays** and **structures**. This chapter covers one-dimensional and multi-dimensional arrays.

## One-dimensional arrays

An array is a data structure containing a number of values of the same type (elements), that can be selected by their position on the structure.

The elements of a one-dimensional array are arranged one after another in a single row

| a | b | c | ... | y | z |
| --- | --- | --- | --- | --- | --- |

To declare an array, we must specify the type of the elements that will be stored and the number of elements.

```C
type array_name[number_of_elements];
```

### Array subscripting

To access a particular element of an array, we can specify the name of the array, followed by its index wrapped in square brackets.

| a | b | c | ... | y | z |
| --- | --- | --- | --- | --- | --- |
| arr[0] | arr[1] | arr[2] | ... | arr[n-2] | arr[n-1] |

Expressions of the form `a[i]` are _lvalues_ so they can be used the same way as variables.

If an array contains elements of type `T` then each element of the array will be of type `T`.

### Program: reversing a series of numbers:

```C
#include <stdio.h>

#define N 10

int main(void){
    int a[N], i;

    printf("Enter %d numbers: ", N);

    for (i = 0; i < N; i++){
        scanf(" %d", &a[i]);
    }

    printf("In reverse order:");
    for (i = N; i > 0; i--){
        printf(" %d", a[i-1]);
    }

    printf("\n");
    return 0;
}
```

### Array initilization

Arrays can be initialized as a list of constant expressione insied curly braces:

```C
int a[5] = {1, 2, 3, 4, 5};
```

if the initializer contains less elements than the length of the arary then the remaining values will be `0`:

```C
int a[5] = {1, 2} // this will be {1, 2, 0, 0, 0}
```

you can use this behaviour to initialize an array as all zeros:

```C
int a[5] = {0}
```

### Program: checking a number for repeated digits

```C
#include <stdio.h>
#include <stdbool.h> // C99 only

int main(void){
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n%10;
        if (digit_seen[digit]){
            break;
        }
        digit_seen[digit] = true;
        n /- 10';
    }

    if (n > 0){
        printf("Repeated digit\n")
    }
    else{
        printf("No repeated digit\n")
    }

    return 0;
}
```

### Using the `sizeof` operator with arrays:

- `sizeof(array)` will return the size in bytes of the whole array.
- `sizeof(array[i])` will return the size in bytes of an element in the array (all alements are of the same type so they all shoud have the same size)
- `sizeof(array)/sizeof(array[0])` is a way to calculate the number of elements in an array

### Program: interest again

```C
#include <stdio.h>

#define NUM_RATER ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void){
    int i, low_rate, num_years, years;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");

    for (i = 0; i < NUM_RATES; i++){
        printf("%6d%%", low_rate+i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year < num_years; year++){
        printf("%3d     ", year);
        for (i = 0; i < NUM_RATES; i++){
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("7.2f", value[i]);
        }
        printf("\n");
    }

    printf("\n");
    return 0
}
```
