#include<iostream>
using namespace std;

// Function overloading
float max(float a, float b);
int max(int x, int y); // Uncomment if needed

int main()
{
    int x = 4, y = 5;
    cout << max(x, y);

    float a = 4.5, b = 5.5;
    cout << max(a, b);
}

// Function to find maximum of two floats
float max(float a, float b)
{
    if (a < b)
        return a;
    else
        return b;
}

// Function to find maximum of two integers
// Uncomment this if needed
/*
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
*/
