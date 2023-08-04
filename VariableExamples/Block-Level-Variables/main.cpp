#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++) // Block-level variable
        cout << i;
    
    for (int i = 10; i < 20; i++) // Another block-level variable with the same name
        cout << i;
    
    return 0;
}
