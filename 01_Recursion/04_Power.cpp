#include <iostream>
using namespace std;
int Power(int a,int b){
    if(b==0){
        return 1;
    }
    return Power(a,b-1)*a;
}
// faster
int Power(int a,int b){
    // this will reiterate lesser than above due to checkpoints
    if(b==0){
        return 1;
    }
    if(b%2==0){
        return Power(a*a,b/2);
    }
    else{
        return a*Power(a*a,(b-1)/2);
    }
  
}
int main(){
    cout<<Power(2,3);
    return 0;
}