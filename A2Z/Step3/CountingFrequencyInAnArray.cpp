#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int FrequencyArray(vector<int>v){
    int hash[1000000] = {0};
    for(int i=0;i<v.size();i++){
        hash[v[i]]++;
    }
    int v = 2;
    int freq = hash[v];
    return freq;
}
int main(){
    
    return 0;
}