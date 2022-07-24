#include <iostream>
#include "GiveHint.h"

using namespace std;

void GiveHint(int guess, int secretNumber)
{
    if (guess > secretNumber)
        cout << "Your guess was too high. ";
    else if (guess < secretNumber)
        cout << "Your guess was too low. ";

    cout << "Give it another try!" << endl;
}