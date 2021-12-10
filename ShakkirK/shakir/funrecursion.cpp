#include <iostream>
using namespace std;
int factorial(int);
int main() 
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Factorial of " << num << " = ";
    return 0;
}
int factorial(int n) 
{
    int s=1;
    if (n==0) 
    return s;
    else 
    return n*factorial(n-1);
}