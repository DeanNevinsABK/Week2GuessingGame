#include <iostream>
#include "IsInputValid.h"

using namespace std;

bool IsInputValid(int guess, int min, int max)
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(99, '\n');
        cout << "That is not a number! Try again." << endl;
        return false;
    }
    else if (guess < min)
    {
        cout << "Your guess can't be lower than " << min << "! Try again." << endl;
        return false;
    }
    else if (guess > max)
    {
        cout << "Your guess can't be higher than " << max << "! Try again." << endl;
        return false;
    }

    return true;
}