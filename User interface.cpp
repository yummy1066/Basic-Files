// User interface.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num, answer;

    std::cout << "Guess a number between 1 and 10.\n";
    std::cin >> num;
    if (num > 10 || num < 1) {
        std::cout << "Invalid entry, please enter a number between 1 and 10.";
        std::cin >> num; 
    }
    answer = rand() % 10 + 1; 
    while (num != answer) {
        std::cout << "Incorrect, guess again.\n";
        std::cin >> num;
    }
    std::cout << "Correct! You guessed " << answer;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
