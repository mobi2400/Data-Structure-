#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Array{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}
void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
void insert(struct Array *arr,int index,int x){
    if(index>=0 && index<=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    
    }
}
int Delete(struct Array *arr,int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int linearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            return i;
        }
    }
    return -1;
}
int binarySearch(struct Array *arr,int key){
    int l=0;
    int h=arr->length-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(key==arr->A[mid]){
            return mid;
        }
        else if(key<arr->A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
}
int get(struct Array *arr,int index){
    if(index>=0 && index<arr->length){
        return arr->A[index];
    }
    return -1;
}
void set(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
}
int max(struct Array *arr){
    int max=arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(arr->A[i]>max){
            max=arr->A[i];
        }
    }
    return max;
}
int min(struct Array *arr){
    int min=arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(arr->A[i]<min){
            min=arr->A[i];
        }
    }
    return min;
}
int sum(struct Array *arr){
    int sum=0;
    for(int i=0;i<arr->length;i++){
        sum+=arr->A[i];
    }
    return sum;
}
float avg(struct Array *arr){
    return (float)sum(arr)/arr->length;
}
void reverse(struct Array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}

int main(){
    struct Array arr;
    return 0;
}