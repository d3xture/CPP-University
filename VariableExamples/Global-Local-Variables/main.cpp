#include <iostream>
using namespace std;

int c = 5; // Global variable (Example 1)

void fun(){
    int c = 10; // Local variable inside fun (Example 2)
    int a = 5;
    cout << a;
}

void funTwo(){
    // int c* = 10; // This line contains a syntax error, commented out for correction
    int b = 6;
    cout << b;
}

void funThree(){
    int a = 7;
    cout << a;
    c++; // Incrementing the global variable c (Example 4)
}

int main(){
    // Uncomment these lines to see the output of different functions
    // cout << fun();
    // cout << funTwo();
    // cout << funThree();

    // Uncommenting these lines will result in an error
    // cout << a;
    // cout << b;
    // cout << a;

    cout << c; // It will print because c is a global variable
}
