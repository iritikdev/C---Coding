#include<iostream>
#include<math.h>
using namespace std;

class Rectangle{
    public:
        int lenght, breadth;

        int area() {
            return lenght*breadth;
        }

        int perimeter() {
            return 2*(lenght+breadth);
        }
        int diagonal() {
            return sqrt((lenght * lenght) + (breadth * breadth));
        }
};

// int main()
// {
//     Rectangle r;
//     r.lenght = 10;
//     r.breadth = 5;
//     cout << "Area: "<< r.area() << endl;
//     cout << "Diagonal: "<< r.diagonal()<< endl;
//     cout << "Perimeter: "<< r.perimeter()<< endl;
//     return 0;
// }

// int main()
// {   
//     /* creating an object r type Reactangle : creating in stack */
//     Rectangle r;

//     /* creating a pointer ptr that will point to r(to address of r) */
//     /* this pointer ptr is created in heap */
//     Rectangle *ptr;
//     ptr = &r;

//     ptr->lenght = 10;
//     ptr->breadth = 5;
//     cout << "Area: "<< ptr->area() << endl;
//     cout << "Diagonal: "<< ptr->diagonal()<< endl;
//     cout << "Perimeter: "<< ptr->perimeter()<< endl;
//     return 0;
// }

int main() {
    /* creating dynamic memory allocation in Heap */
    Rectangle *ptr = new Rectangle();
    ptr->lenght = 15;
    ptr -> breadth = 10;
    cout << "Area: "<< ptr->area() << endl;
    cout << "Diagonal: "<< ptr->diagonal()<< endl;
    cout << "Perimeter: "<< ptr->perimeter()<< endl;
    return 0;
}