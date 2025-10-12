#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int largest(vector<int>v){
    // correct the logic here but takes more time
    // T = O(nlogn)
    sort(v.begin(),v.end());
     int a = v.back();
     return a;
}
int largest2(vector<int>v){
    // T = O(n)
    // directly return the max element
   return *max_element(v.begin(),v.end());
}

int main(){
    
    return 0;
}