#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

double ncr(int n, int r){
    return double(fact(n))/(double(fact(n-r))* double(fact(r)));
}

int main(){
    cout<<ncr(4,4);
}
