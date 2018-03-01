# SelectionSort

Implementation of a selection sort sorting algorithm using a random number of elements and random values.

This sorting algorithm works by extracting the minimum element from the list and setting it to the start, eventually resulting in a sorted list. Sorting the list this way ensures that at the i'th step, the first i elements will be sorted; meaning all other elements are larger than the first i elements.

The algorithm uses a nested loop, similar to the Bubble Sort algorithm; meaning the Big O notation is similar:

![alt text](https://i.imgur.com/It9LaPb.png)

Removing the constants, we end up with a complexity of O(n²)

Further reading:

https://en.wikipedia.org/wiki/Selection_sort

https://en.wikipedia.org/wiki/Big_O_notation
