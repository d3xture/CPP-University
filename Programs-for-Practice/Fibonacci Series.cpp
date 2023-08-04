#include <iostream>
using namespace std;
int main()
{
   int n1 = 0;
   int n2 = 1;
   int n3;
   int nth;

   cout << "Enter the limit. " << endl;
   cin >> nth;

   cout << n1 << "\t" << n2 << "\t";

   for (int i = 1; i <= nth; i++)
   {
      n3 = n1 + n2;
      n1 = n2;
      n2 = n3;

      cout << n3 << "\t";
   }
   return 0;
}
