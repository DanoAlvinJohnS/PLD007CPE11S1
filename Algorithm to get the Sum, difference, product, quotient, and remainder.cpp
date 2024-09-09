#include <iostream>
using namespace std;

int main() {
  cout << "\nAlgorithm to get the Sum, difference, product, quotient, and remainder of two intigers\n"<<endl;
  //Local Variables
  int x = 5, y = 2, sum = 0, product = 0, difference = 0;
  float quotient = 0, remainder = 0;
  
  //Formula 
  sum = x + y;
  product = x * y;
  difference = x - y;
  remainder = x % y;
  quotient = x /(double)y;
  
  //Printing Results
  cout << "Sum = " << sum << endl;
  cout << "Product = " << product << endl;
  cout << "Difference = " << difference << endl;
  cout << "Quotient = " << quotient << endl;
  cout << "Remainder = " << remainder << endl;

  return 0;
}

