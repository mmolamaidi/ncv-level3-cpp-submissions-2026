// Made with Blocks to C++
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int random(int maximum);

int random(int maximum) {
    return 1 + rand() % maximum;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    // Guess a number between 1 and 10
    int secret = random(20);
    int guess = 0;
    int tries = 0;
    cout << "I am thinking of a number from 1 to 10." << endl;
    do {
        cout << "Your guess:" << endl;
        cin >> guess;
        tries += 1;
        if (guess < secret) {
            cout << "Too low" << endl;
        } else if (guess > secret) {
            cout << "Too high" << endl;
        } else {
            cout << "Correct!" << endl;
        }
    } while (guess != secret);
    cout << "You needed " << tries << " tries." << endl;
    return 0;
}
