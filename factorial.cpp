#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else 
    {
        return n*fact(n-1);
    }
}

// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f=f*i;
//     }
//     return f;
// }

int main(){
    cout<<fact(6);
}
