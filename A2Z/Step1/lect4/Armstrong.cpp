#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Armstrong(int n){
    int original_n = n;
    int reminder = 0;
    int cube = 0;
    while(n>0){
        reminder = n%10;
        cube += pow(reminder,3);
        n = n/10;
    }
    if(original_n == cube){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    return 0;
}
// only use 3 digits number 
// to make it general use while loop to check number
/*
    int reminder=0;
    if(n<10){
        return 1;
    }
    else{
     while(n>0){
        reminder= reminder+1;
      n = n/10;
     }
     return reminder;
    }
*/