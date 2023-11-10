#include <bits/stdc++.h>
using namespace std;

struct Customer
{
    int id;
    string name;
    string email;
};

int main(int argc, char const *argv[])
{
    vector<Customer> customers;
    customers.push_back({1, "Ritik", "google.com"});
    customers.push_back({2, "Google", "google.com"});

    for (auto &&customer : customers)
    {
        cout << customer.name << " " << customer.email << endl;
    }
    return 0;
}
