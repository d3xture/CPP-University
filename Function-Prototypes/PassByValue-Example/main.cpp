#include<iostream>
using namespace std;

// Pass by value example
void increment(int a)
{
    a++;
    cout << a; // This will print 6
}

int main()
{
    int a = 5;
    increment(a); // Passing the value 5 to the function
    cout << a;    // This will print 5
    //cout << b;  // Commented out since 'b' is not declared in this scope
}
