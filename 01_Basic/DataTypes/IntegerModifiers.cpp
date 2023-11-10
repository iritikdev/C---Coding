#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    /*
        Integer Modifiers
        signed = Negative value | -23, -562
        usigned = Posistive value | 45. 89

        int a = -23; // still takes 4 bytes
        signed b = -23 // still takes 4 bytes
        unsigned c = 56 // still takes 4 bytes

        Range of unsigned numbers = [0-2^n - 1] = [0 - 2^32-1] = [0 - 4294967295]
        Range of signed numbers  = [-2^(n-1) to 2^(n-1)-1] = [0 - 2^32-1] = [-2147483648 to 2147483647]

        (signed/unsigned) (short/long) int variable_name = value;

        short
        long
    */

    cout << sizeof(unsigned)<<endl;
    cout << sizeof(signed)<<endl;
    cout << sizeof(int)<<endl;
    return 0;
}
