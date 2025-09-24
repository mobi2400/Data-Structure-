#include <iostream>
using namespace std;
// solved using recursiion
int Sum(int n){
    if(n==0){
        return 0;
    };
    return Sum(n-1) + n;
}
// simple way
int SumSimple(int n){
    // takes less time and space
    return (n*(n+1))/2;
}
int main(){
    
    cout<<Sum(10);
    return 0;
}