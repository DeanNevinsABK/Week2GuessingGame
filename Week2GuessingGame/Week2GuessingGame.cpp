#include <iostream>
#include <cstdlib>
#include <time.h>
#include "IsInputValid.h"
#include "IsCorrect.h"
#include "GiveHint.h"

using namespace std;

const int k_minValue{1};
const int k_maxValue{10};
bool correct{ false };

int main()
{
    srand(time(0));
    int secretNumber{ rand() % k_maxValue + k_minValue};

    std::cout << "Welcome to the GUESSING GAME!";

    do
    {
        std::cout << "Guess the secret number between " << k_minValue << " and " << k_maxValue << ": ";
        int guess{};
        cin >> guess;

        correct = IsCorrect(guess, k_minValue, k_maxValue, secretNumber);
        
    } while (!correct);

    cout << "Thank you for playing!";
}

