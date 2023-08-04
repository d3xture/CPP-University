#include <iostream>
using namespace std;

// Defining the struct
struct Student
{
    int rollNo;
    string Name;
    int marks[3];
    string subject[3];
};

int main()
{
    // Array of students using the Student struct
    Student students[3];

    // Initializing student data
    students[0].rollNo = 100;
    students[0].Name = "Huzaifa";
    students[0].marks[0] = 60;
    students[0].marks[1] = 70;
    students[0].marks[2] = 55;

    students[1].rollNo = 99;
    students[1].Name = "Amna";
    students[1].marks[0] = 99;
    students[1].marks[1] = 98;
    students[1].marks[2] = 80;

    students[2].rollNo = 40; // Corrected line
    students[2].Name = "Dex"; // Corrected line
    students[2].marks[0] = 15;
    students[2].marks[1] = 20;
    students[2].marks[2] = 39;

    // Printing student data
    for (int i = 0; i < 3; i++)
    {
        cout << "Printing " << students[i].Name << endl;
        cout << "Roll No: " << students[i].rollNo << endl;
        cout << "Marks: " << students[i].marks[0] << "\t" << students[i].marks[1] << "\t" << students[i].marks[2] << endl;
    }

    return 0;
}
