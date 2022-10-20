#include<iostream>
using namespace std;

int area(int l, int b){
    return(l*b);
}

int Perimeter(int l, int b){
    return (2* (l+b));
}

int main(){
    int length=0, breadth=0;
    cout<<"enter the length and breadth of the rectangle: ";
    cin>>length>>breadth;
    cout<<"Area= "<<area(length, breadth)<<endl;
    cout<<"Perimeter= "<<Perimeter(length, breadth);
    return 0;
}
