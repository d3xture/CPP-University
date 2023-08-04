#include <iostream>
using namespace std;
int main()
{
    // it will print odd numbers from 1 to 99.
    // using for loop.
    for (int a = 1; a <= 99; a += 2)
    {
        cout << a << endl;
    }
    // it will print odd numbers from 102 to 199.
    // using while loop.
    int b = 101;
    while (b <= 199)
    {
        cout << b << endl;
        b += 2;
    }
    // it will print odd numbers from 201 to 299.
    // using do-while loop.
    int c = 201;
    do
    {
        cout << c << endl;
        c += 2;
    } while (c <= 299);
}
