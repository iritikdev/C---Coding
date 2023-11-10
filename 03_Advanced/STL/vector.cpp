#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> list;

    for (int i = 0; i < 10; i++) {
        // cout <<"size: "<< list.size()<<" " <<"capacity: "<< list.capacity() << endl;
        list.push_back(i + 2);
    }

    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << " ";
    }
    
    
    return 0;
}
