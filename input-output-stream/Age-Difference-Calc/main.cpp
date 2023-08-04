#include <iostream>
using namespace std;

int main()
{
    string yourname, friendname;
    int yourAge, friendAge, ageDiff;

    cout << "Enter your name: " << endl;
    cin >> yourname;

    cout << "Enter your age: ";
    cin >> yourAge;

    cout << "Enter the name of your friend: ";
    cin >> friendname;

    cout << "Enter your friend's age: ";
    cin >> friendAge;

    ageDiff = yourAge - friendAge;
    cout << "Your name is " << yourname << " and your age is " << yourAge << "." << endl;
    cout << "Your friend's name is " << friendname << " and their age is " << friendAge << "." << endl;
    cout << "And the age difference between you and your friend is: " << ageDiff;

    return 0;
}
