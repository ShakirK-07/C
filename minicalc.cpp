#include<iostream>
using namespace std;

int main() 
{
    float num1, num2, sum;
    char operand; 'Q';
    do
    {
        cout << "case=calc\n \n";
        cout << "input= ";
        cin >> operand;
        cin >> num1,num2;
        cout << " output=\n";
        cout << "+ for addition\n";
        cout << "- for subtraction\n";
        cout << "* for multiplication\n";
        cout << "/ for division\n";
        cout << "Enter Q to quit\n";
        cout << "Enter your choice\n";
        cout << "Enter the two numbers\n";
        switch(operand) 
        {
            case '+': 
                sum = num1+num2;
                cout << sum << "\n";
                break;
            case '-':
                sum = num1-num2;
                cout << sum << "\n";
                break;
            case '*':
                sum = num1*num2;
                cout << sum << "\n";
                break;
            case '/':
                sum = num1/num2;
                cout << sum << "\n";
                break;
            default:
                cout << "Invalid operator\n";
                break;
        }
        cout << "sum= " <<sum; "\n";
    }
    while(operand !='Q');
    return 0;
}