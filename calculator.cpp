#include <iostream>
using namespace std;

int main()
{
    char operatorx;
    double num1, num2;
    cout << "Enter the Operator";
    cin >> operatorx;
    cout << "Enter two number one by one ";
    cin >> num1 >> num2;
    switch (operatorx)
    {
    case '+':
        cout << num1 << "+" << num2 << " = " << (num1 + num2);
        break;
    case '-':
        cout << num1 << "-" << num2 << " = " << (num1 - num2);
        break;
    case '*':
        cout << num1 << "*" << num2 << " = " << (num1 * num2);
        break;
    case '/':
        if (num2 != 0.0)
        {
            cout << num1 << "/" << num2 << " = " << (num1 / num2);
        }
        else
        {
            cout << "Divide by zero Situation";
        }
        break;
    default:
        cout << operatorx << "This is not a valid Operator";
    }
    return 0;
}