#include <iostream>
using namespace std;

// Defining the struct
struct Id 
{
    string name;
    int room;
    double ph;
    string regNo;
};

int main()
{
    // Creating an instance of the Id struct
    struct Id dex;

    // Initializing struct members
    dex.name = "Huzaifa";
    dex.room = 5;
    dex.ph = 1234556768;
    dex.regNo = "SE120222032";

    // Printing struct member values
    cout << "Name: " << dex.name << endl;
    cout << "Room: " << dex.room << endl;
    cout << "Phone no: " << dex.ph << endl;
    cout << "Reg no: " << dex.regNo << endl;

    return 0;
}
