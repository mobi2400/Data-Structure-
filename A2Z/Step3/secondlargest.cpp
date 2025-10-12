#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int secondLargest(vector<int>v){
    sort(v.begin(),v.end());
    if(v.size()<2 || v[0]==v.back()){
        return -1;
    };
    int largest = v.back();
    for(int i=v.size()-2;i>=0;i--){
        if(v[i]!=largest){
            return v[i];
        }
    }
    return -1;
}

int main(){
    
    return 0;
}