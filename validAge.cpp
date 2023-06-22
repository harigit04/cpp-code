// age validation

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Please Enter Your age : ";

    cin >> age;

    if (age < 18)
    {
        cout << "You are a teenager :(";
    }
    else if (age >= 18 && age <= 59)
    {
        cout << "Your are eligible to vote :)";
    }
    else if (age >= 60)
    {
        cout << "You are senior citizen.";
    }
    return 0;
}