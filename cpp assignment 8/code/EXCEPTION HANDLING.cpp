#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try
    {
        if (age < 0 || age > 120)
        {
            throw age;
        }

        cout << "Valid age: " << age << endl;
    }
    catch (int)
    {
        cout << "Exception caught: Invalid age entered."
             << endl;
    }

    cout << "Program continues after exception handling."
         << endl;

    return 0;
}
