#include<iostream>
using namespace std;

// Ambiguity example
int GiveMeANo();
float GiveMeANo();

int main()
{
    cout << GiveMeANo(); // This call will result in ambiguity
}

int GiveMeANo()
{
    return 10;
}

float GiveMeANo()
{
    return 5.5;
}
