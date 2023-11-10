#include<iostream>
#include<math.h>
using namespace std;

class Rectangle {
    private:
        int lenght, breadth;

    public:
        /* Non-parameterized constructor */
        // Rectangle() {
        //     lenght = 0;
        //     breadth = 0;
        // }

        /* Parameterized constructor */
        Rectangle(int l = 0, int b = 0) {
            setLength(l);
            setBreadth(b);
        }

        /* Copy Constructor */
        Rectangle(Rectangle &r) {
            lenght = r.lenght;
            breadth = r.breadth;
        }
        /* Mutators function */
        void setLength(int l) {
            (l > 0) ? lenght = l : lenght = 0;
        }
        void setBreadth(int b) {
            (b > 0) ? breadth = b : breadth = 0; 
        }
        /* Accessors function */
        int getLength() {
            return lenght;
        }     
        int getBreadth() {
            return breadth;
        }

        /* Some Business Logic */
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

// int main() {
//     Rectangle r(11,6);
//     Rectangle r2(r);
//     cout << r2.getLength() << " " << r2.getBreadth() << endl;
//     cout << r2.area() << " " << r2.perimeter() << " " << r2.diagonal()<< endl; 

//     return 0;
// }


void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 45, y = 12;
    swap(x, y);
    cout << x << " " << y;
}