#include<iostream>
using namespace std;

class Rectangle {
    public:
        int length;
        int breadth;
        
        Rectangle(int l = 0, int b = 0) {
            length = l;
            breadth = b;
        }

        int area() {
            return length * breadth;
        }

        int perimeter();
};

int Rectangle::perimeter() {
    return 2*(length + breadth);
}

int main()
{
    Rectangle r(4,5);
    cout<< r.area();
    cout<< r.perimeter();
    return 0;
}