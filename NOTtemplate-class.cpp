#include<iostream>
using namespace std;

class Arithmatic{
    private:
    int a;
    int b;
    
    public:
    Arithmatic(int a, int b);
    int add();
    int sub();
};

Arithmatic::Arithmatic(int a, int b){
    this->a=a;
    this->b=b;
}

int Arithmatic::add(){
    int c;
    c=a+b;
    return c;
}

int Arithmatic::sub(){
    int c;
    c=a-b;
    return c;
}

int main(){
    Arithmatic ar(10,5);
    cout<<"addition is "<<ar.add()<<endl;
    cout<<"subtraction is "<<ar.sub();
}
