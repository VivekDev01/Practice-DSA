#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
      return 1;
    else 
      return n* fact(n-1);
}

int exponent(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        return m*exponent(m,n-1);
    }
}

double tailor(int x, int terms){
    if(terms==1){
        return 1;
    }
    else{
        return (double((exponent(x,terms-1))/double(fact(terms-1)))+double(tailor(x,terms-1)));
    }
}

int main()
{
    // cout<<fact(4)<<endl;
    // cout<<exponent(4,2)<<endl;
    cout<<tailor(1,10);
}
