#include <iostream>
using namespace std;
long int fib(long int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   long int x , i=0;
   int c=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fib(i);
      i++;
      c++;
   }
   cout << endl;
   cout << c;
   return 0;
}