#include <iostream>
#include <ctime>
#include <string>
#include <cmath>


using namespace std;

int random;
int attempts;

void guess() {
    int a;
    cin >> a;

    attempts++;

    if (a == random) {
        cout << "You win!" << endl;

    }
    if (a > random) {
        cout << "Too high! Try again! " << endl;

        if (random + 5 >= a) {
            cout << "Really Close! (up to 5 points) " << endl;
        }
        else if (random + 10 >= a) {
            cout << "Close (up to 10 points)!" << endl;
        }
        else if (random + 30 <= a) {
            cout << "Not close! (up to 30 points) " << endl;
        }
        else {
            cout << "Mid Distance (up to 10-30 points)" << endl;
        }
        cout << "Enter Your New Guess: ";
        return guess();

    }
    if (a < random) {
        cout << "Too low! Try again! " << endl;

        if (random - 5 <= a) {
            cout << "Really Close! (up to 5 points) " << endl;
        }
        else if (random - 10 <= a) {
            cout << "Close! (up to 10 points) " << endl;
        }
        else if (random - 30 >= a) {
            cout << "Not close! (up to 30 points) " << endl;
        }
        else {
            cout << "Mid Distance (up to 10-30 points)" << endl;
        }
        cout << "Enter Your New Guess: ";
        return guess();
    }
}

int main() {

    int easy, medium, hard, difficulty;
    easy = 1;
    medium = 2;
    hard = 3;

    cout << "Choose the difficulty(easy = 1,medium = 2,hard = 3): ";
    cin >> difficulty;

    srand(time(0));

    attempts = 0;

    if (difficulty == easy) {
        cout << "Easy mode" << endl;
        cout << "Enter Your Guess: ";
        random = (rand() % (1 - 50 + 1));

        guess();
        cout << "Your score is: " << 100 - (2 * attempts);
    }

    else if (difficulty == medium) {
        cout << "Medium mode" << endl;
        cout << "Enter Your Guess: ";
        random = (rand() % (1 - 100 + 1));

        guess();
        cout << "Your score is: " << 100 - (2 * attempts);
    }

    else if (difficulty == hard) {
        cout << "Hard mode" << endl;
        cout << "Enter Your Guess: ";
        random = (rand() % (1 - 200 + 1));

        guess();
        cout << "Your score is: " << 100 - (2 * attempts);
    }
    else {
        cout << "Invalid difficulty level.You must enter 1, 2 or 3 as numbers. " << endl;
    }
}
