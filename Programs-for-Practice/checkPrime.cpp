#include <iostream>
using namespace std;
int main()
{
   int num, i;
   cout << "Enter the number: " << endl;
   cin >> num;

   for (i = 2; i < num; i++)
   {
      if (num % i == 0)
      {
         cout << num << " isn't a prime number. " << endl;
         break;
      }
   }
   if (i == num)
   {
      cout << num << " is a prime number. " << endl;
   }

   return 0;
}
