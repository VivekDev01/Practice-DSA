#include<iostream>
using namespace std;

static double p=1,f=1;
double e(int x, int n){
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
    cout<<e(1,10);
}
