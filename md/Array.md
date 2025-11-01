# Arrays
- An array is a data structure that can hold a fixed number of values of a single type.
- The values are stored in contiguous memory locations.
- The size of an array is fixed at compile time.
- also called vector variable
## Declaration
- Syntax: `data_type array_name[array_size];`
    - Example: `int arr[10];` declares an array of 10 integers.
- initially stores garbage value before assigning
## Accessing Array Elements
- Syntax: `array_name[index]`
    - Example: `arr[0]` to access the first element of the array.
 ```cpp
 // Example of declaring and accessing an array
int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " "; // Output: 1 2 3 4 5
}
```
## Static vs Dynamic Arrays
- Static Arrays:
    - Size is fixed at compile time.
    - Memory is allocated on the stack.
    - Example: `int arr[10];`
- Dynamic Arrays:
    - Size can be changed during runtime.
    - Memory is allocated on the heap.
    - but the address of an array stored in stack memory
    - Example: `int* arr = new int[10];` in C++.
    - Remember to free the allocated memory using `delete[] arr;` in C++.
## increase the size of dynamic array
- Create a new array with the desired size.
- Copy the elements from the old array to the new array.
- Delete the old array.
- Assign the new array to the original pointer.
 ```cpp
 // Example of increasing the size of a dynamic array
  int *P = new int[5]; // Original array of size 5
  int *q = new int[10]; // New array of size 10
  for (int i = 0; i < 5; i++) {
    q[i] = P[i]; // Copy elements from old array to new array
  }
  delete[] P; // Delete the old array
  P = q; // Assign the new array to the original pointer
  delete[] q; // Delete the new array
```
## 2D Arrays
- A 2D array is an array of arrays, often used to represent matrices or grids.
- Declaration: `data_type array_name[rows][columns];`
    - Example: `int matrix[3][4];` declares a 2D array with 3 rows and 4 columns.
- declaring 2d array in heap memory
 ```cpp
 int *A[3]; // Array of 3 integer pointers
 A[0] = new int[4]; // First row
 A[1] = new int[4]; // Second row
 A[2] = new int[4]; // Third row 
 ```

# Array Abstract Data Type (ADT)
- An array ADT is a collection of elements identified by index or key.
- It supports the following operations:
    - Access: Retrieve an element at a specific index.
    - Search: Find the index of a specific element.
    - Insertion: Add an element at a specific index.
    - Deletion: Remove an element from a specific index.
    - Traversal: Iterate over all elements in the array.
    - Update: Modify the value of an element at a specific index.
- Time Complexity:
    - Access: O(1)
    - Search: O(n)
    - Insertion: O(n)
    - Deletion: O(n)
    - Traversal: O(n)
    - Update: O(1)
- Space Complexity: O(n) where n is the number of elements in the array.
## Common Mistakes
- forget to initialize the array
- forget to update the size of the array    
- using wrong index while accessing elements
- using out of bound index
- using negative index
- using index greater than size

##  Add or Append in Array ADT
- To add an element at the end of the array:
    - Check if there is space in the array.
    - Insert the new element at the next available index.
    - Increment the size of the array.
    - Example:
    ```cpp
    void append(int value) {
        // capacity is the total size allocated for the array
     if (size < capacity) { 
         arr[size] = value;
         size++; 
     }           
    }
    ```

## Insertion in Array ADT
- To insert an element at a specific index:
    - Shift the elements to the right of the index.
    - Insert the new element.
    - Increment the size of the array.
    ```cpp
    void insert(int index, int value) {
        if (index >= 0 && index <= size) {
            for (int i = size; i > index; i--) {
                arr[i] = arr[i - 1]; // Shift elements to the right
            }
            arr[index] = value;
            size++;
        }
    }
    ```
## Deletion in Array ADT
- To delete an element at a specific index:
    - Shift the elements to the left of the index.
    - Decrement the size of the array.
    - Example:
    ```cpp
    void remove(int index) {
        if (index >= 0 && index < size) {
            for (int i = index; i < size - 1; i++) {
                arr[i] = arr[i + 1]; // Shift elements to the left
            }
            size--;
        }
    }
    ```
## Searching in Array ADT
- To search for an element in the array:
    - Iterate through the array.
    - Compare each element with the target value.
    - Return the index if found, otherwise return -1.
    - Example:
    ```cpp
    int LinearSearch(int value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                return i; // Return index if found
            }
        }
        return -1; // Return -1 if not found
    }
   ```
   - Binary Search
    - works on sorted array only 
    - Time Complexity: O(log n)
    - Example:
    ```cpp
    int binarySearch(int arr[], int size, int target) {
        int left = 0;
        int right = size - 1;
        while (left <= right) {
            int mid = (left + right )/ 2;
            if (arr[mid] == target) {
                return mid; // Target found
            }
            else if (arr[mid] < target) {
                left = mid + 1; // Search in the right half
            }
            else {
                right = mid - 1; // Search in the left half
            }
        }
        return -1; // Target not found
    }
    ```
## Basic operations in Array ADT
### Get
- To get the value at a specific index:
```cpp
int get(int index) {
    if (index >= 0 && index < size) {
        return arr[index];
    }
    return -1; // or throw an exception
}
```
### Set
- To set the value at a specific index:
```cpp
void set(int index, int value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}
```
### Max
- To get the maximum value in the array:
```cpp
int getMax() {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
```
### Min
- To get the minimum value in the array:
```cpp
int getMin() {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}
```
### Sum
- To get the sum of all elements in the array:
```cpp
int sum() {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}
```
### Average
- To get the average of all elements in the array:
```cpp
float average() {
    return (float)sum() / size;
}
``` 
### Reverse
- To reverse the elements of the array:
```cpp
void reverse() {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
```
### Left Rotate
- To left rotate the array by one position:
```cpp
void leftRotate() {
    int temp = arr[0];
    for (int i = 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
}
```
### Right Rotate
- To right rotate the array by one position:
```cpp
void rightRotate() {
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
```
### Inserting in Sorted Array
- To insert an element in a sorted array while maintaining the sorted order:
```cpp
void insertSorted(int value) {
    int i = size - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
    size++;
}
```
### check if an array is sorted
- to check if an array is sorted or not
```cpp
bool isSorted() {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; // Array is not sorted
        }
    }
    return true; // Array is sorted
}
```
### Rearranging Negative and Positive Numbers
- To rearrange an array such that negative numbers come before positive numbers:
```cpp
void rearrange() {
    int i = 0;
    int j = size - 1;
    while (i < j) {
        while (arr[i] < 0) i++;
        while (arr[j] >= 0) j--;
        if (i < j) {
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
```