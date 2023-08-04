#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *b = &a;
    cout << a << endl;  // it will print 5
    cout << &a << endl; // it will print the adress of 'a' which is 50x61ff0c in my case.
                        // The memory address is represented in hexadecimal format.
    cout << b << endl;  // since 'b' holds the memory address of 'a'. I will print the same adress50x61ff0c
    cout << *b << endl; //  This statement prints the value pointed to by b to the console, followed by a newline character.
                        // The * operator is used to dereference a pointer and access the value it points to. In this case,
                        // it will print the value of a (which is 5) because b holds the address of a.
}
