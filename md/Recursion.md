# Recursion
- A function calls itself under some condition is called recursion
- recursive function is traced in the form of tree
- recurssion have two phased
    - ascending
        - calling then returning
    - descending
        - returning then calling
```cpp
// ascending phase
void fun(int n){
    if (n>0){
        // first operation is done 
        printf("%d",n);
        // then function call itself
        fun(n-1)
    }
}
// descending phase
void fun1(int){
    if(n>0){
        // first function is called 
        fun1(n-1);
        // then operation is done
        printf("%d",n);
    }
}
void main(){
    int x = 3;
    int y = 4;
    fun(x);
    fun1(y);
}
```
- Time Complexity
    - O(n)
    - depends on the input
### Static varibles in recursion
```static int x = 0```
- it will have single copy
- it will load only at the starting of the execution
- variable declared out of the scope of a function is called global var
```cpp
int fun(int n){
    // value of x wont be getting defualt everytime func is called 
    // x will be getting updated everytime
    // kind of global variable
    static int x = 0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
```
## Types of recursion
### Tail recusrion
- When a recursive function call itself at the last line of the function just like fun called himself at the last line of the function in the given example
```cpp
void fun(int n){
    if(n>0){
        printf("%d",n);
        // this is the last statement of the function
        fun(n-1);
    }
}
```
- operation is performed during calling time not returning time
- Time Complexity and space complexity
    - O(n)
- convert it into loop as space complexity of loop in this case O(1)
### Head Recursion
- calling the function at the starting same as fun is called in the given example
```cpp
void fun(int n){
    if(n>0){
        fun(n-1);
        printf("%d",n)
    }
}
```
- no operation should be done above the function is called
### Tree recursion
- when function call himself more than one time 
```cpp
void fun(int n){
 if(n>0){
    printf("%d",n);
    fun(n-1);
    fun(n-1);
 }
}
```
- Time complxity depends usually O(2pow(n))
- Space complexity O(n)
### indirect recursion
- more than one function calling one another in circular fashion
```cpp
void funA(int n){
    if(n>0){
        printf("%d",n);
        funB(n-1);
    }
}
void funB(int n){
    if(n>1){
        printf("%d",n);
        funA(n/2);
    }
}
```
### Nested Recursion 
- when function pass parameter as recursive call
```cpp
int fun(int n){
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}
````