#include<iostream>
using namespace std;

class Rectangle{
    private:
       int length;
       int breadth;

    public:

        void initialize(){
            int l=0, b=0;
            cout<<"enter the length and breadth of the rectangle: ";
            cin>>l>>b;
            length=l;
            breadth=b;
        }

        int area(){
             return(length*breadth);
        }

        int Perimeter(){
            return (2* (length+breadth));
        }

};

int main(){
    Rectangle r;
    r.initialize();
    cout<<"Area= "<<r.area()<<endl;
    cout<<"Perimeter= "<<r.Perimeter();
    return 0;
}
