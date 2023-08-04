#include <iostream>
using namespace std;

int main() {
    int scoreThreshold = 50;
    int studentScore;

    cout << "Enter your score: ";
    cin >> studentScore;

    if (studentScore >= scoreThreshold) {
        cout << "Congratulations! You passed.";
    } else {
        cout << "Sorry, you failed.";
    }

    return 0;
}
