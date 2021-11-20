#include <iostream>
using namespace std;
int main()
{
    int rev=0,rem=0,n;
    cout << "Enter the number : ";
    cin >>n;
    while(n!=0)
    {
        rem = n%10;
        rev =rev*10+rem;
        n/=10;
    
    }
    cout << "Reverse of the number : " << rev << "\n";
    return 0;
}