#include<iostream>
using namespace std;

double e(int x, int n){
    double s=1;
    for(;n>0;n--){
        s=1+(double(x)/double(n))*s;
    }
    return s;
}

int main(){
    cout<<e(1,10);
}
