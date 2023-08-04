#include<iostream>

using namespace std;

int main()
{
    int currentAge, yearsAhead;

    cout<<"Enter your current age: ";
    cin>>currentAge;
    
    cout<<"How many years ahead would you like to look? ";
    cin>>yearsAhead;

    int futureAge = currentAge + yearsAhead;

    cout<<"Your age in "<<yearsAhead<<" will be "<<futureAge<<".";
    return 0;
}
