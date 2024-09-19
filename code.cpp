#include <iostream>
#include <cmath>  //for squrt
using namespace std;

bool allPrime(int num) {
      if(num <= 1)
      return false;

   for (int i = 2; i <= sqrt(num); i++)
   {
     if( num % i == 0)
     return false;
   }
   return true;

}

int main(){
   int N ;
   cout << "enter the value of N :";
   cin >> N;
   for (int i = 1; i <= N; i++)
   {
      if (allPrime(i))
      {
         cout << i << " " << endl;
      }else {
         cout << "you have choosen wronge value"<< endl;
      }
      
   }
   
   return 0;
}
