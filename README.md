# CS25-week6

Explanation(in order of the commented numers)

1. A struct is defined with a string name, and int id
2. A binary search is implemented (see below for further)
3. An array of Item is dynamically allocated
4. The array of Item is filled
5. user is prompted to enter ID
6. The binary search is called on the list of Items with the results being stored in a variable
7. Results of search are displayed
8. memory is freed

------------------------------------------------------------------------------------------

Binary search (explanation)

Searches a sorted array for an ID.

checks middle the item first.

If the middle item is smaller than the target ID the right half is searched

If the middle item is larger than the target ID the right half is searched

The search array keeps getting split in half until either the middle item is either the target ID and the index is returned or the target ID is not found and the fxn returns -1.
