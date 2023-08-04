#include <iostream>
using namespace std;
int main()
{

    // Printing from 1 to 100 by using FOR LOOP
    for (int i = 1; i <= 100;)
    {
        cout << i << endl;
        i++;
    }

    // Printing from 1 to 100 by using WHILE LOOP
    int a = 1;
    while (a <= 100)
    {
        cout << a << endl;
        a++;
    }
    // Printing from 1 to 100 by using DO-WHILE LOOP
    int b = 1;
    do
    {
        cout << b << endl;
        b++;
    } while (b <= 100);

    return 0;
}
