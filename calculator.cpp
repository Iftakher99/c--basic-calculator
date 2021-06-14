#include <iostream>

using namespace std;

int main()
{
    char op;
    double num1, num2;

    cout << "Enter the Operator (+, -,*,/) : ";
    cin >> op;
    cout << "Enter two numbers One by One:";
    cin >> num1 >> num2;

    switch (op)
    {

    case '+':
        cout << num1 << " + " << num2 << " = " << (num1 + num2);
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << (num1 - num2);
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << (num1 * num2);
        break;

    case '/':
        if (num2 != 0.0)
            cout << num1 << " / " << num2 << " = " << (num1 / num2);
        else
            cout << "Divide by zero Situation";

        break;

    default:
        cout << op << " This is a Invalid Operator ";
    }
    return 0;
}