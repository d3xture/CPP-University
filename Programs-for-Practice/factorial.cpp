#include <iostream>
using namespace std;
int main()
{
   int num;
   int f;
   cout << "Enter the limit."  <<endl;
   cin >> num;

   f = num;

   for ( int i = 1; i < num; i++)
   {
       f = f*i;
   }
   cout << "Factorial of " << num << " is " << f << ".";

   return 0;
}
