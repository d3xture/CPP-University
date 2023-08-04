#include<iostream>
using namespace std;

// Function declaration
int GetNextNo(int n);

int main()
{
    int n = 5;
    int next = GetNextNo(n); // Function call
    cout << next;
}

// Function definition
int GetNextNo(int n)
{
    return n + 1;
}
