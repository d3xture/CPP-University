#include <iostream>
using namespace std;

void SalamPak()
{
    cout << "Salam Pakistan!" << endl;
}

void PassFail()
{
    int per;
    cout << "Enter you final exam percentage" << endl;
    cout << "Enter: ";
    cin >> per;
    if (per > 30 && per <= 100)
        cout << "Congratulation! You got " << per << "%"
             << " and you passed your exam" << endl;
    else if (per > 100)
    {
        cout << "Percentage is always upto 100%, don't go too far, thank you!" << endl;
    }
    else
    {
        cout << "Oops! you screwed up" << endl;
    }
}

void PrintName()
{
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Your name is " << name << "." << endl;
}

void yourAge()
{
    int age;
    cout << "What's your age, enter: " << endl;
    cin >> age;
    cout << "Your age is " << age << endl;
}

void friendname()
{
    int friendName;
    cout << "What is your friend name?, enter: " << endl;
    cin >> friendName;
    cout << "Your friend name is " << friendName << "." << endl;
}

void friendAge()
{
    int friendAge;
    cout << "What's your friend age?, enter: " << endl;
    cin >> friendAge;
    cout << "Your friend age is " << friendAge << endl;
}

void ageDiff()
{
    string yourName, friendName;
    int yourAge, friendAge, ageDiff;

    cout << endl;
    cout << "Enter your and your friend's name, and then ages I will tell you the age difference." << endl;
    cout << "What's your name ?" << endl;
    cin >> yourName;
    cout << "and what's your friend's name?" << endl;
    cin >> friendName;
    cout << "Cool, enter your age!" << endl;
    cin >> yourAge;
    cout << "and your friend's age?" << endl;
    cin >> friendAge;

    ageDiff = yourAge - friendAge;

    ageDiff = -ageDiff;

    cout << "Okay, so the age difference between " << yourName << " and " << friendName << " is " << ageDiff << " years!" << endl;
}

int futureAges()
{
    int currentAge, yearsAhead, futureAge;
    int currentYear, futureYear;
    cout << "What's your current age?" << endl;
    cin >> currentAge;
    cout << "How many years ahead would you like to look?" << endl;
    cin >> yearsAhead;

    futureAge = currentAge + yearsAhead;

    cout << "Your age in " << yearsAhead << " years will be " << futureAge << "." << endl;
}

void printNumbers(int n) // for this you have to declare variable in main function
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

void printTable()
{
    int num;

    cout << "Which table you want to print ?" << endl;
    cin >> num;

    for (int i = 0; i <= 10; i++)
    {
        cout << num << "*" << i << " = " << num * i << endl;
    }
}

void printEvens(int n) // you have to declare the variable for this first
{
    for (int i = 0; i <= n; i += 2)
    {
        cout << i << endl;
    }
}

void printOdds(int n) // you have to declare the variable
{
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << endl;
    }
}

void printVowels(char a) // by using if else statements
{

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        cout << "You entered the vowel." << endl;
    }
    else
    {
        cout << "You entered the consonant." << endl;
    }
}

void printVowelsSwitch()
{
    char ch;
    cout << "Enter the letter: " << endl;
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "You entered a vowel." << endl;
        break;
    case 'e':
        cout << "You entered a vowel." << endl;
        break;
    case 'i':
        cout << "You entered a vowel." << endl;
        break;
    case 'o':
        cout << "You entered a vowel." << endl;
        break;
    case 'u':
        cout << "You entered a vowel." << endl;
        break;

    default:
        cout << "It's a consonant." << endl;
        break;
    }
}

void housingproject() // you can modify according to you.
{
    int catType;
    cout << "Enter category type: " << endl;
    cout << "1. Ex Pakistani's Block " << endl;
    cout << "2. Senior Citizen Block " << endl;
    cout << "3. Govt. Employee Block " << endl;
    cout << "4. Any other Block " << endl;
    cin >> catType;

    switch (catType)
    {
    case 1:
        cout << "Facilities of Ex Pakistani block includes the following: ";
        break;
    case 2:
        cout << "Facilities of Senior Citizen block includes the following: ";
        break;
    case 3:
        cout << "Facilities of Senior Citizen block includes the following: ";
        break;
    case 4:
        cout << "Facilities of any other Block includes the following: ";
        break;
    default:
        cout << "You selected the wrong category";
        break;
    }
}

void kakajeeMenu()
{
    cout << "TODAY'S Menu" << endl;
    cout << "************" << endl;
    cout << "Daal Mash" << endl;
    cout << "Daal Channa" << endl;
    cout << "Lobia" << endl;
    goto skip;
    cout << "Chaat Fruit" << endl;
    cout << "Ice Cream" << endl;
skip:
    cout << "Pulao";
}

void solveMids(int a)
{
    cout << "There are total 8 questions in the question paper, which one you want me to solve ?" << endl;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Here is the solution for question no 1. " << endl;

        int a = 10, b = 5;
        int c = a + b++; // it prints 15. It will print 16 in next execution beacause 1 is already incrimented
        cout << c << endl;
        break;

    case 2:
        cout << "Here is the solution for question no 02. " << endl;
              for(int i =3; i <= 30; i*=3){
             cout<<i<<"\t";               //it will start from 3 and go upto and it will keep multiplying 3
        }

    case 3:
        cout << "Here is the solution for question no 03. " << endl;
            int a = 2, b =4, c=6;
        if ( a==2 && (b == 4 || c ==7)){
            cout<<"True";
        }                  //it will check the condition
        else{
            cout<<"False";
        }

    case 4:
        cout << "Need maintainance, sorry " << endl;
        

    //        int GetNext(int n){
    //     return(n-2);    // It will subtract minus 2 from the integer and go again in loop
    // }
    
    //     int n =10;
    //     do{
    //         cout<<n<<"\t";   // it will print 10 when we are here in this line
    //         n = GetNext(n);  //  then it will go to the funtion called "GetNext"
    //     } while(n>=0);       //  it will run upto 0

        case 5:
        cout << "Here is the solution for question no 5. " << endl;
               int n = 15;
         while (n%3==0 && n>0){   // it will check wether the integer is divisible by 3 or not.
             cout<<n<<"\t";       //  it will print
             n-=3;                //then it will minus three from the result and go in the loop again
         }

        case 6:
        cout << "Here is the solution for question no 06. " << endl;
           int n = 20;
        if ( n==20 &&  n++ == 20){   //it will check the condition, and because the conditon is true
            cout<<"true";            //it will print true for sure
        }

        case 7:
        cout << "Here is the solution for question no 07. " << endl;
         char option = 'a';
         switch (option)
         {
             case 'A':
             case 'B':
             case 'C':
              cout<<"A or B or C";
              break;
              default:
              cout<<"None of them";
         }

         case 8:
         cout << "Here is the solution for question no 08. " << endl;

         int units = 230;
     int unitPrice = 0;
     int billAmount = 0;

    if(units>=200){
        unitPrice = 20;
        billAmount += ( units -200)*unitPrice;
        units =200;
    }
    if(units>=100){
        unitPrice = 15;
        billAmount+=(units-100)*unitPrice;
        units =100;
    }
    if(units>=50){
        unitPrice = 10;
        billAmount +=(units-50)*unitPrice;
        units = 50;
    }
    unitPrice = 5;
    billAmount += units*unitPrice;
 
    }

}

    void calculateBillOD()
    {
     int units = 230;
     int unitPrice = 0;
     int billAmount = 0;

    if(units>=200){
        unitPrice = 20;
        billAmount += ( units -200)*unitPrice;
        units =200;
    }
    if(units>=100){
        unitPrice = 15;
        billAmount+=(units-100)*unitPrice;
        units =100;
    }
    if(units>=50){
        unitPrice = 10;
        billAmount +=(units-50)*unitPrice;
        units = 50;
    }
    unitPrice = 5;
    billAmount += units*unitPrice;

    // This task was additional given by Sir.
    double dueAmount;
    dueAmount = billAmount * 0.10;
    cout << "Your current bill Amount is: " << billAmount << endl;
    cout << "Your due Amount is: " << dueAmount << endl;
    cout << "Your total bill Amount is: " << billAmount + dueAmount;
    }



    

    
   



int main()
{
    // SalamPak();
    // PassFail();
    // PrintName();
    // yourAge();
    // friendname();
    // friendAge();
    // ageDiff();
    // futureAges();
    // printNumbers(a); // you have to declare the variable
    // printTable();
    // printEvens(a); //you have to declare the variable
    // printOdds(a); //you have to declare the variable
    // printVowels(c);
    // printVowelsSwitch();
    // housingproject();
    // kakajeeMenu();
    // solveMids();
    // calculateBillOD();
}
