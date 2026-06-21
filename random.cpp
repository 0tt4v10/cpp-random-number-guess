#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess = 0;
    int tries = 0;

    std::cout << "Welcome to my Random Number Game (1-100)\n\n";

    while (guess != secret) {
        std::cout << "Your tipp: ";
        std::cin >> guess;
        tries++;

        if (guess < secret) {
            std::cout << "Too low!\n";
        }
        else if (guess > secret) {
            std::cout << "Too High!\n";
        }
        else {
            std::cout << "Correct! Tries: " << tries;
        }
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}