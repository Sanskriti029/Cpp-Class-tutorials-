// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// class GuessingGame {
// private:
//     int number;

// public:
//     GuessingGame() {
//         srand(time(0));
//         number = 1 + rand() % 1000;
//     }

//     void play() {
//         int guess;
//         char playAgain;
//         cout << "I have a number between 1 and 1000.\n";
//         cout << "Can you guess my number?\n";
        
//         do {
//             cout << "Please type your first guess: ";
//             while (true) {
//                 cin >> guess;
//                 if (guess == number) {
//                     cout << "Excellent! You guessed the number!\n";
//                     cout << "Would you like to play again (y or n)? ";
//                     cin >> playAgain;
//                     if (playAgain == 'y' || playAgain == 'Y') {
//                         number = 1 + rand() % 1000;
//                         cout << "I have a new number between 1 and 1000.\n";
//                         cout << "Can you guess my new number?\n";
//                     }
//                     break;
//                 } else if (guess < number) {
//                     cout << "Too low. Try again.\n";
//                 } else {
//                     cout << "Too high. Try again.\n";
//                 }
//             }
//         } while (playAgain == 'y' || playAgain == 'Y');
//     }
// };

// int main() {
//     GuessingGame game;
//     game.play();
//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void guessTheNumber() {
    char playAgain;
    
    do {
        // Seed the random number generator
        srand(static_cast<unsigned int>(time(0)));
        
        // Randomly select a number between 1 and 1000
        int numberToGuess = rand() % 10;
        int guess = 0;

        cout << "I have a number between 1 and 10." << endl;
        cout << "Can you guess my number?" << endl;

        // Loop until the player guesses the correct number
        while (true) {
            cout << "Please type your guess: ";
            cin >> guess;

            if (guess < numberToGuess) {
                cout << "Too low. Try again." << endl;
            } else if (guess > numberToGuess) {
                cout << "Too high. Try again." << endl;
            } else {
                cout << "Excellent! You guessed the number!" << endl;
                break; // Exit the loop if the guess is correct
            }
        }

        // Ask if the player wants to play again
        cout << "Would you like to play again (y or n)? ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing! Goodbye!" << endl;
}

int main() {
    guessTheNumber();
    return 0;
}
