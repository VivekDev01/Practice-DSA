#include<iostream>
using namespace std;

double e(int x, int n){
    static double s=1;
    double num=1;
    double den=1;
    for(int i=1;i<n;i++){
        num=num*x;
        den=den*i;
        s=s+num/den;
    }
    return s;
}

int main(){
    cout<<e(1,10);
}
