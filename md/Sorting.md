# Sorting techniques
## Comparison Sorts
- Take 0(n^2) time complexity
    - Bubble Sort
    - insertion Sort
    - selection Sort
- Take 0(nlogn) time complexity
    - heap Sort
    - merge sort
    - quick sort
    - tree sort
- Take 0(n^3/2) time complexity
    - shell sort
## index based sorts
- take 0(n) time complexity but space complexity is high
    - counting sort
    - radix sort
    - bucket sort
### Bubble sort
- it takes 0(n^2) time complexity
- it takes 0(n) space complexity
```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
}
```
### Insertion Sort
- it takes 0(n^2) time complexity
- it takes 0(n) space complexity
```cpp
void insertionSort(int arr[], int n){
 for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
 }  
}
```
### Selection Sort
- it takes 0(n^2) time complexity
- it takes 0(n) space complexity
```cpp
void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
```