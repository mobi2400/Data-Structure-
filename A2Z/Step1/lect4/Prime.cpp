#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Prime(int n){
    // this is the most efficient way
    // better time complexity and space complexity
   if(n<=1){
    return false;
   }
   /*
   while checking for prime number or divisor iterate tille sqrt(n) and not n
   */
   for(int i=2;i<=n;i++){
    if(n%i==0){
        return false;
    }
   }
   return true;
}

int main(){
    
    return 0;
}