#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    cout << "Array a:" << endl;
    for(int i = 0; i < 2; i++) // Outer loop for rows
    {
        for(int j = 0; j < 3; j++) // Inner loop for columns
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int b[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int c[3][3] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 18}};
    int sum[3][3];

    for(int i = 0; i < 3; i++) // Rows
    {
        for(int j = 0; j < 3; j++) // Columns
        {
            sum[i][j] = b[i][j] + c[i][j];
        }
    }

    // Printing the sum array
    cout << "Array sum:" << endl;
    for(int i = 0; i < 3; i++) // Rows
    {
        for(int j = 0; j < 3; j++) // Columns
        {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
