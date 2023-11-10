#include<iostream>
#include<math.h>

using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int factors(int num) {
    
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0) cout << i << " ";        
    }  
}

int factorSum(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0) {
            sum = sum + i;
        }       
    }  
    return sum;
}

int isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0) {
            sum = sum + i;
        }       
    }  
    if (2*num == sum) cout << "A Perfect Number.";
    else cout << "Not Perfect Number";
    
}

void isPrimeNumber(int num) {
    int nof = 0;
    for (int i = 1; i <= num; i++)
    {
        if(num % i == 0) nof++;
         
    }
    if (nof == 2) cout << "A Prime Number."; 
    else cout << "Not A Prime Number" ;   
}

void MultiplicationTable(int n) {
    for(int i = 1; i <= 10; i++) {
        cout<<n<<" * "<<i<< " = " << n*i <<endl;
    }
}
void ListMultiplicationTable() {
    for (int j = 2; j <= 10; j++)
    {
        for(int i = 1; i <= 10; i++) {
            cout<<j<<" * "<<i<< " = " << j*i <<endl;
        }
        cout << endl;
    }
    
}

int displayDigits(int num) {
    int r;
    while (num > 0)
    {
       r = num % 10;
       num = num / 10;
       cout << r << " ";
    }
    return 0; 
}

void isArmstrongNumber(int num) {
    int r, sum = 0, temp = num;
    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        sum += (r*r*r);
    }
    if(temp == sum ) cout << "It's a Armstrong Number.";
    else cout << "Not a Armstrong Number.";   
}

int ReverseNumber(int num) {
    int r,rev = 0;
    while (num > 0)
    {
        r = num % 10;
        num /= 10;
        rev = rev * 10 + r; 
    }
    return rev;
    
}

void isPalindrome(int num ) {
    int r,rev = 0, temp = num;
    while (num > 0)
    {
        r = num % 10;
        num = num/10;
        rev = rev*10+r;
    }
    if(temp == rev) cout<<"It's Plindrome.";
    else cout<<"Not a Plindrome.";
}

int main()
{   int num;
    cout<<"Enter Number: ";
    cin >> num;
    isPalindrome(num);
    
    
    return 0;
}