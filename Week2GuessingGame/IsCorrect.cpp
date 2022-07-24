#include <iostream>
#include "IsCorrect.h"
#include "IsInputValid.h"
#include "GiveHint.h"

using namespace std;


bool IsCorrect(int guess, int min, int max, int secretNumber)
{
    if (!IsInputValid(guess, min, max)) { return false; }

    if (guess == secretNumber)
    {
        cout << "You are CORRECT!!! The answer is " << secretNumber << "." << endl;
        return true;
    }

    GiveHint(guess, secretNumber);

    return false;
}