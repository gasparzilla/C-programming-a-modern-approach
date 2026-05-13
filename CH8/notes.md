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


