#include <iostream>
using namespace std;

int decToBinary(int dec){
   int ans = 0;
   int power = 1;
   while (dec > 0)
   {
      int remander = (dec % 2);
      dec = (dec / 2);
      
      ans = ans + (power * remander);
      power = ( 10 * power);
   }
   return ans;
}

int main () {
   int dec;
   cout << "Enter the value of dec :";
   cin >> dec;
   for (int i = 2; i <= dec; i++)
   {
       int BinOutput = decToBinary(i);
       cout << BinOutput << endl;
   }
   return 0;
}