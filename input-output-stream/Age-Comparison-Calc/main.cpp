#include <iostream>
using namespace std;
int main(){

    int current_year = 2023;
    int your_birth_year;
    int friend_birth_year;

    cout<<"What's your birth year?: ";
    cin>>your_birth_year;
    cout<<"What's your friend birth year?: ";
    cin>>friend_birth_year;

    int your_age = current_year - your_birth_year;
    int friend_age = current_year - friend_birth_year;

    int ageDiff = your_age-friend_age;
    // We can ignore this "if" step. This is just to ignore the minus "-" values.
    if(ageDiff<0){
        ageDiff = -ageDiff;
    }

    cout<<"Here is the age difference between you and your friend's age: "<<ageDiff<<endl;


    return 0;

}
