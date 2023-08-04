#include <iostream>
using namespace std;

int main() {
    int num = 2;
    int sum = 0;

    while (num <= 2) {
        sum += num;
        num += 2;
    }

    cout << "The sum of all even numbers from 1 to 100 is: " << sum << endl;

    return 0;
}
