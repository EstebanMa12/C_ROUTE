int arr[] = {1, 2, 3, 4, 5};
int *ptr = arr; // ptr points to the first element of arr

// incrementing the pointer moves it to the next integer position in memory
ptr++; // ptr now points to the second element of arr

// decrementing the pointer moves it to the previous integer position in memory
ptr--; // ptr now points to the first element of arr again

// adding an integer value to the pointer moves it to the corresponding position in memory
ptr = ptr + 2; // ptr now points to the third element of arr

// subtracting an integer value from the pointer moves it to the corresponding position in memory
ptr = ptr - 2; // ptr now points to the first element of arr again

// subtracting a pointer from another pointer returns the number of elements between them
int *ptr1 = &arr[0];
int *ptr2 = &arr[3];
int diff = ptr2 - ptr1; // diff is 3

// adding an integer value to a pointer moves it to the corresponding position in memory
// subtracting an integer value from a pointer moves it to the corresponding position in memory
// subtracting a pointer from another pointer returns the number of elements between them
