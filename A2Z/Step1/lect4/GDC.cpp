#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int GDC(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
   if(a==b){
    return a;
   }
   if(a==1 || b==1){
    return 1;
   }
   if(a>b){
    if(a%b==0){
        return b;
    }
    else{
        return GDC(b,a%b);
    } 
       
   }
   if(b>a){
    if(b%a==0){
        return a;
    }
    else{
        return GDC(b,b%a);
    }
    
   }
}

int main(){
    cout<<GDC(4,6);
    return 0;
}
// Use euclid's algorithm