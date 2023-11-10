#include<bits/stdc++.h>
using namespace std;
/*
    *  *  *  *  *
    *  *  *  *  *
    *  *  *  *  *
    *  *  *  *  *
    *  *  *  *  *
*/
void starPatternI(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) 
            cout << "*  ";
        cout << "\n";
    }
}

void starPatternII(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) 
            cout << i;
        cout << "\n";
    }
}

void starPatternIII(int rows) {

}

/*
    Simple half pyramid pattern
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
*/

/*
    Right triangle pyramid of Stars

            * 
          * * 
        * * * 
      * * * * 
    * * * * * 
*/

void starPatternIV() {
    
}
/*
    1 2 3 4 5 
    2 3 4 5   
    3 4 5
    4 5
    5
*/

void numberPattern(int rows) {
    for (int i = 0; i < rows+1; i++) {
        for (int j = i+1; j < rows+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}


int main() {
    numberPattern(5);
    return 0;
}