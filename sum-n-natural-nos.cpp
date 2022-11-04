#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}

// int sum(int n){
//     return ((n*(n+1))/2);
// }

// int sum(int n){
//     int sum=0;
//     n=n+1;
//     while(n--){
//         sum=sum+n;
//     }
//     return sum;
// }

int main(){
    cout<<sum(10);
}
