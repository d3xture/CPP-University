#include <iostream>
using namespace std;
int main()
{
    int catType;
    cout << "Enter category type: " << endl;
    cout << "1. Ex Pakistani's Block " << endl;
    cout << "2. Senior Citizen Block " << endl;
    cout << "3. Govt. Employee Block " << endl;
    cout << "4. Any other Block " << endl;
    cin >> catType;

    switch (catType)
    {
    case 1:
        cout << "Facilities of Ex Pakistani block includes the following: ";
        break;
    case 2:
        cout << "Facilities of Senior Citizen block includes the following: ";
        break;
    case 3:
        cout << "Facilities of Senior Citizen block includes the following: ";
        break;
    case 4:
        cout << "Facilities of any other Block includes the following: ";
        break;
    default:
        cout << "You selected the wrong category";
        break;
    } 
}
