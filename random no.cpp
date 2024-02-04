#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
    int randomnumber;
    randomnumber = (rand() % (50 - 1) + 1);

    int mode;
    int guess;

    std::cout << "Enter the mode of level:" << "\n";
    std::cin >> mode;

    if (mode == 1) {
        std::cout << "You have chosen easy level" << "\n";
        std::cout << "You have 5 chances to guess the random number" << "\n";

        for (int i = 0; i < 5; ++i) {
            std::cout << "Enter your guess:" << "\n";
            std::cin >> guess;

            if (guess > randomnumber) {
                std::cout << "Your guess is greater than the random number!" << "\n";
            } else if (guess < randomnumber) {
                std::cout << "Your guess is lesser than the random number!" << "\n";
            } else {
                std::cout << "Congratulations! You found the correct random Number" << "\n";
               
            }
        }

        std::cout << "Better luck next time" << "\n";
    } else if (mode == 2) {
        std::cout << "You have chosen hard level" << "\n";
        std::cout << "You have 3 chances to guess the random number" << "\n";

        for (int i = 0; i < 3; ++i) {
            std::cout << "Enter your guess:" << "\n";
            std::cin >> guess;

            if (guess > randomnumber) {
                std::cout << "Your guess is greater than the random number!" << "\n";
            } else if (guess < randomnumber) {
                std::cout << "Your guess is lesser than the random number!" << "\n";
            } else {
                std::cout << "Congratulations! You found the correct random Number" << "\n";
               
            }
        }

        std::cout << "Better luck next time!" << "\n";
    } else {
        std::cout << "Invalid mode. Please choose either 1 or 2." << "\n";
    }

    return 0; 
}