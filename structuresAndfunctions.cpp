#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int initialize(struct Rectangle *r){
    int length=0, breadth=0;
    cout<<"enter the length and breadth of the rectangle: ";
    cin>>length>>breadth;
    r->length=length;
    r->breadth=breadth;
}

int area(struct Rectangle r){
    return(r.length*r.breadth);
}

int Perimeter(struct Rectangle r){
    return (2* (r.length+r.breadth));
}

int main(){
    struct Rectangle r;
    initialize(&r);
    cout<<"Area= "<<area(r)<<endl;
    cout<<"Perimeter= "<<Perimeter(r);
    return 0;
}
