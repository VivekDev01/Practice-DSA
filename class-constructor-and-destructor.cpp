#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    
    public:
    Rectangle(){
        length=0;
        breadth=0;
    }
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength(){
        return length;
    }
    void setLength(int l){
        length=l;
    }
    
    ~Rectangle();
};

Rectangle::Rectangle(int l, int b){
        length=l;
        breadth=b;
}

int Rectangle::area(){
    return (length*breadth);
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}

Rectangle::~Rectangle(){
    cout<<"Destructor begins";
    //Deallocation of dynamically created memory is done
}

int main(){
    Rectangle r(10,5);
    cout<<"Area= "<<r.area();
    cout<<"perimeter= "<<r.perimeter();
    cout<<"length= "<<r.getLength();
    r.setLength(20);
    cout<<"length= "<<r.getLength();
}
