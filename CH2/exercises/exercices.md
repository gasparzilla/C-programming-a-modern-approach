## E1: 

```C
#include <stdio.h>

int main(void){
    printf("hello, world\n");
}
```

to get rid of compiler waring we must include the return statement `return(0)`

## E2: 

```C
#include <stdio.h>

int main(void){
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0; 
}
```

- **directives:** the only directive present is `#include <stdio.h>`
- **statements:** the three `printf()` calls and the `return` at the end of the `main()` function.

The program will print:

```
Parkinson's Law:
Work expands so as to fill the time
available for its completion.
```

## E3:

```C
#include <stdio.h>

int main(void){

    int height,length,width;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    int volume = height * length * width;

    printf("Dimensions (inches): %dx%dx%d\n", length, width, height);
    printd("Volume (cubic inches): %d\n", volume);
    printf("Dimensional Weight (pounds): %d\n", ((volume + 165) / 166));

    return 0;
}
```

## E4:

```C
#include <stdio.h>

int main(void){
    int i1, i2, i3, i4;
    float f1, f2, f3, f4;

    prinf("integers: %d, %d, %d, %d", i1, i2, i3, i4);
    prinf("floats: %.2f, %.2f, %.2f, %.2f", f1, f2, f3, f4);

    return 0;
}
```

when running the program multiple times, the following pattern was observed:

```
integers: large_int, 1, large_int, large_int
floats: -0.00, 0.00, large_float, 0.00
```

## E5

b, c, and d are legal C identifiers

## E6