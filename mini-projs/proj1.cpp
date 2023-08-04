#include <iostream>
using namespace std;

int main()
{
    int askSemester, askFellow, askSUByn, askSUB;
    string fellowNames[6] = {"Huzaifa Haris", "Rohail Karim", "Jamal Qasim", "Nabeel Niazi", "Syed Ahad Shah", "Hashir"};
    string subNames[6] = {"Principles of Management", "Introduction to Computing", "Academic Reading and Writing", "Introduction to Philosophy", "Introduction to Psychology", "Islamic Studies"};
    bool HuzaifaHaris = true;
    float haris[6] = {78, 68, 80.50, 82, 72, 86};
    int rohail[6] = {82, 74, 89, 78, 71, 83};
    int jamal[6] = {82, 71, 86, 80, 70, 80};
    int nabeel[6] = {78, 68, 80, 82, 72, 80};
    int ahad[6] = {78, 68, 80, 82, 72, 80};
    int hashir[6] = {78, 68, 80, 82, 72, 80};

    cout << endl;
    cout << " Please choose the semester that will set the stage for your academic journey: " << endl;
    cout << " 1. First Semester" << endl;
    cout << " 2. Second Semester" << endl;
    cout << " Enter: ";
    cin >> askSemester;

    if (askSemester == 1)
    {
        cout << "Thanks for selecting the semester" << endl;
    }
    else if (askSemester == 2)
    {
        cout << "The result will be uploaded soon." << endl;
        return 0;
    }
    else if (askSemester > 0 || askSemester == 8)
    {
        cout << "Looking forward to upcoming semesters with great enthusiasm and anticipation!";
        return 0;
    }
    else if (askSemester < 1 && askSemester <= 0)
    {
        cout << "Please note that there are a total of 8 semesters in this program. Kindly choose from the available options. Thank you for your cooperation." << endl;
        return 0;
    }
    else if (askSemester > 8)
    {
        cout << "Please note that there are a total of 8 semesters in this program. Kindly choose from the available options. Thank you for your cooperation." << endl;
        return 0;
    }

    cout << "Please choose the name of the fellow whose academic progress you would like to check:" << endl;
    cout << "1. Huzaifa Haris" << endl;
    cout << "2. Rohail Karim" << endl;
    cout << "3. Jamal Qasim" << endl;
    cout << "4. Nabeel Niazi" << endl;
    cout << "5. Syed Ahad Shah" << endl;
    cout << "6. Hashir" << endl;
    cout << "Enter: ";
    cin >> askFellow;

    if(askFellow){
    cout << "Are you interested in checking the overall results or a particular subject's result?" << endl;
    cout << "1. Overall Results" << endl;
    cout << "2. Particular Subject" << endl;
    cout << "Enter:";
    cin >> askSUByn;
    if (askSUByn == 1)
    {
        cout << "Sure, here is the overall result of " << fellowNames[0] << ":" << endl;
        cout << "SEMESTER-1---FALL---2022" << endl;
        cout << "      Course Code       Course Title                 Percentage      Grade" << endl;
        cout << "___________________________________________________________________________________" << endl;
        cout << endl;
        cout << "1.       BS-121      Principles of Management          78.00           B+" << endl;
        cout << "2.       CS-101      Introduction to Computing         68.00           C+" << endl;
        cout << "3.      ENG-152      Academic Reading and Writing      80.50           B+" << endl;
        cout << "4.      PHI-101      Introduction to Philosophy        82.00           A-" << endl;
        cout << "5.      PSY-101      Introduction to Psychology        72.00           B-" << endl;
        cout << "6.       RS-101      Islamic Studies                   82.00           A+" << endl;
        cout << "                                                                GPA: 3.30" << endl;
        cout << "___________________________________________________________________________________" << endl;
    }
    else if (askSUByn == 2)
    {
        cout << "Which subject's result would you like to view?" << endl;
        cout << "1. Principles of Management" << endl;
        cout << "2. Introduction to Computing" << endl;
        cout << "3. Academic Reading and Writing" << endl;
        cout << "4. Introduction to Philosophy" << endl;
        cout << "5. Introduction to Psychology" << endl;
        cout << "6. Islamic Studies" << endl;
        cout << "Enter: ";
        cin >> askSUB;
        switch (askSUB)
        {
        case 1:
            cout << "Here is the result of " << subNames[0] << "." << endl;
            cout << "      Course Code       Course Title                 Percentage      Grade" << endl;
            cout << "_________________________________________________________________________ " << endl;
            cout << "        BS-121       Principles of Management          78.00           B+ " << endl;
            break;
        case 2:
            cout << "Here is the result of " << subNames[1] << "." << endl;
            cout << "      Course Code       Course Title                 Percentage      Grade" << endl;
            cout << "_________________________________________________________________________ " << endl;
            cout << "        CS-101      Introduction to Computing          68.00           C+" << endl;
            break;
        case 3:
            cout << "Here is the result of " << subNames[3] << "." << endl;
            cout << "      Course Code       Course Title                 Percentage      Grade" << endl;
            cout << "_________________________________________________________________________ " << endl;
            cout << "        ENG-152      Academic Reading and Writing      80.50           B+" << endl;
            break;
        case 4:
            cout << "Here is the result of " << subNames[4] << "." << endl;
            cout << "      Course Code       Course Title                 Percentage      Grade" << endl;
            cout << "_________________________________________________________________________ " << endl;
            cout << "        PHI-101      Introduction to Philosophy        82.50           A-" << endl;
            break;
        case 5:
            cout << "Here is the result of " << subNames[5] << "." << endl;
            cout << "      Course Code       Course Title                 Percentage      Grade" << endl;
            cout << "_________________________________________________________________________ " << endl;
            cout << "        PSY-101      Introduction to Psychology        72.00           B+" << endl;
            break;
        case 6:
            cout << "Here is the result of " << subNames[6] << "." << endl;
            cout << "      Course Code       Course Title                 Percentage      Grade" << endl;
            cout << "_________________________________________________________________________ " << endl;
            cout << "        RS-101      Islamic Studies                    82.00           A+" << endl;
            break;

        default:
            cout << "Invalid selection";
            break;
        }
    }
    }

    else{
        cout<<"Noting";
    }

    return 0;
}
