#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age entered.";
    } else if (age < 18) {
        cout << "You are a minor.";
    } else if (age < 65) {
        cout << "You are an adult.";
    } else {
        cout << "You are a senior citizen.";
    }

    return 0;
}
