#include<iostream>
using namespace std;

// int exponenet(int m, int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return m* exponenet(m,n-1);
//     }
// }
//The above function takes more calls and more multiplication so below code is prefered for exponential

int exponent(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return exponent(m*m, n/2);
    }
    else{
        return m*exponent(m*m, (n-1)/2);
    }
}

int main(){
    cout<<exponent(6,3);
    return 0;
}
