#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int fact(int n) {
    int mul = 1;
    for(int i = n; i > 0; --i) {
        mul *= i;
    }
    return mul;
}

int main()
{
    // Find sum till n numbers
    int n = 10;
    int sum = 0;
    while(n >= 0) {
        sum+=n;
        n--;
    }
    cout << sum;
    
    // Minimum or maximum between two numbers
    int a = 90;
    int b = 17;
    cout << endl;
    cout << ((a>b)?a:b) << endl;
    
    // Number is prime or not
    int m = 8;
    if (isPrime(m))
        cout << m << " is prime";
    else
        cout << m << " is not prime";
    
    // Factorial of a number
    int x = 5;
    cout << endl << "Factorial is: " << fact(x);

    return 0;
}