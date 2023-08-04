#include <iostream>
using namespace std;
int main()
{
    //with for loop
    char a;
    for (;;)
    {
        cout << "Enter a character: " << endl;
        cin >> a;
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        {
            cout << "You entered a vowel " << a << "." << endl;
            break;
        }
        else
        {
            cout << "You entered a consonant" << endl;
        }
    }
    
    //with while loop
    char b;
    cout << "Enter a character: " << endl;
    cin >> b;

    while (!(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'))
    {
        cout << "You entered a consonant" << b << endl;
        cout << "Enter a character: " << endl;
        cin >> b;
    }

    cout << "You entered a vowel " << b << endl;
    
    //with do while loop
    char c;
    do
    {
        cout << "Enter a character: " << endl;
        cin >> c;

        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
        {
            cout << "You entered a consonant " << c << endl;
        }
    } while (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'));

    cout << "You entered a vowel " << c << endl;
    return 0;
}
