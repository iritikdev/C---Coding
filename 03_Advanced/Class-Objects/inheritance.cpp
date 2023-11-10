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
        string area() {
            return "Area is "+ to_string(length*breadth);
        }
        string perimeter() {
            return "Perimeter is " + to_string(2*(length+breadth));
        }
};

class Cuboid : public Rectangle {
    public:
        int height;

        Cuboid(int l = 0, int b = 0, int h = 0) {
            length = l;
            breadth = b;
            height = h;
        } 
        string area() {
            return "Cuboid Area is "+ to_string(length*breadth*height);
        }
        
        string perimeter() {
            return "Cuboid Perimeter is "+ to_string(2*(length*breadth + breadth*height + height*length));
        }
};

int main()
{   
    Rectangle r(4,5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    Cuboid c(4,5,6);
    cout << c.area()<< endl;
    cout << c.perimeter()<< endl;


    return 0;
}