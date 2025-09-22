/*You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int CountDigit(int n){
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
}

int main(){
    int answer;
    answer = CountDigit(4812);
    cout<<answer;
    return 0;
}