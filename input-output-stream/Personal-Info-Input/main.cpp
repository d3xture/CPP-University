#include <iostream>
using namespace std;

int main() {
    string yourname, friendname;
    int yourAge, friendAge;

    cout<<"Enter your name: "<<endl;
    cin>>yourname;

    cout << "Enter your age: ";
    cin >> yourAge;

    cout<<"Enter the name of your friend: ";
    cin>>friendname;

    cout << "Enter your friend's age: ";
    cin >> friendAge;

    cout << "Your name is " << yourname << " and your age is " << yourAge << "." << endl;
    cout << "Your friend's name is " << friendname << " and their age is " << friendAge << "." << endl;
  

    return 0;
}
