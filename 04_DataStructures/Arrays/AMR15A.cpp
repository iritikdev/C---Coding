#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    int lucky = 0;
    int unlucky = 0;
    int weapons[n];

    for (int i = 0; i < n; i++)
        cin >> weapons[i];

    for (int i = 0; i < n; i++) 
        if(weapons[i] % 2 == 0)
            lucky++;
        else
            unlucky++;
    
    if(lucky > unlucky)
        cout << "READY FOR BATTLE" << endl;
    else
        cout << "NOT READY" << endl;
    return 0;
}
