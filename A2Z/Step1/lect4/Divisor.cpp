#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Divisor(int n){
    vector<int>v;
    int div = n;
    while(div>0){
        if(n%div==0){
            v.emplace_back(div);
            v.push_back(n/div);
        }
        div--;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}

int main(){
    
    return 0;
}