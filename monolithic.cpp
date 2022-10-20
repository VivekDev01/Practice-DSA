#include<iostream>
using namespace std;

int main(){
    int length=0, breadth=0;
    cout<<"Enter the length and breadth of a Rectangle: ";
    cin>>length>>breadth;
    int area= length*breadth;
    int peri= 2*(length+breadth);
    cout<<"Area= "<<area<<endl;
    cout<<"Perimeter= "<<peri;
    return 0;
}
