# include <iostream>
using namespace std;

int main() 
{
    float num1, num2, sum;
    char operand;
    cout << "Enter two operands: \n";
    cout << "Input X : ";
    cin >> num1;
    cout << "Input Y : ";
    cin >> num2;
    do
    {
    cout << "Enter operator: '+, -, *, /' : ";
    cin >> operand;
    switch(operand) 
    {
        case '+': 
            sum = num1+num2;
            cout << num1 << " + " << num2 << " = "<< sum << "\n";
            break;
        case '-':
            sum = num1-num2;
            cout << num1 << " - " << num2 << " = " << sum << "\n";
            break;
        case '*':
            sum = num1*num2;
            cout << num1 << " * " << num2 << " = " << sum << "\n";
            break;
        case '/':
            sum = num1/num2;
            cout << num1 << " / " << num2 << " = " << sum << "\n";
            break;
        default:
            cout << "Invalid operator\n";
            break;
    }
    }
    while(operand !='Q');
    return 0;
}