// code no 2
#include <iostream>
using namespace std;
int main()
{
    int nos[SIZE];

    // input from user
    for (int i = 0; i < SIZE; i++)
    {
        cin >> nos[i];
    }
    // Print Array
    for (int i = 0; i < SIZE; i++)
    {
        cout << nos[i];
    }
    // Increment
    for (int i = 0; i < SIZE; i++)
    {
        nos[i] += K;
    }
    // Print Array
    for (int i = 0; i < SIZE; i++)
    {
        cout << nos[i];
    }
    // Multiply by K
    for (int i = 0; i < SIZE; i++)
    {
        nos[i] *= K;
    }
    // Print Array
    for (int i = 0; i < SIZE; i++)
    {
        cout << nos[i];
    }
    return 0;
}
