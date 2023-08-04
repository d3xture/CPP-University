#include<iostream>
using namespace std;
 
int main(){
       char ch;
       cout<<"Enter a letter :";
       cin>>ch;
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout<<"This is a vowel"<<endl;
        break;
    default:
    cout<<"This is a consonant"<<endl;
        break;
    }
    return 0;
}
