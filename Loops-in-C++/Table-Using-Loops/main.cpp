#include <iostream>
using namespace std;
int main()
{
    int num;

    // **TABLE USING FOR-LOOP 

    cout<<"Enter the table number: ";
    cin>>num;
    for(int a=1; a<=10;){
        cout<<num<<"*"<<a<< " = " <<num*a<<endl;
        a++;
    }

    // **TABLE USING WHILE-LOOP
    int num2;
    int b = 1;
    cout << "Enter the table number: ";
    cin >> num2;
    while (b <= 10)
    {
        cout << num2 << "*" << b << " = " << num2 * b << endl;
        b++;
    }

    //  **TABLE USING DO-WHILE LOOP

    int num3;
    int c = 1;
    cout << "Enter the table number: " << endl;
    cin >> num3;
    do
    {
        cout << num3 << "*" << c << " = " << num3 * c << endl;
        c++;
    } while (c <= 10);

    return 0;
}
