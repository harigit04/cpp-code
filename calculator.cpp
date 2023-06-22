// calculator program in cpp


#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;

    int choice;

    cout << "Enter 1: Sum | 2: Substract | 3: Multiply | 4: Division : | 5: Remainder :  "<< endl;

    cin >> choice;

    if (choice == 1)
    {
        cout << "Your answer is :" << a + b;
    }
    else if (choice == 2)
    {
        cout << "Your answer is :" << a - b;
    }
    else if (choice == 3)
    {
        cout << "Your answer is :" << a * b;
    }
    else if (choice == 4)
    {
        cout << "Your answer is :" << a / b;
    }
    else
    {
        cout << "Your answer is :" << a % b;
    }

    return 0;
}