#include <iostream>
using namespace std;

int main() {
  cout << "\nAlgorithm to get the Sum, difference, product, quotient, and remainder of two integers\n"<<endl;
  //First variable
  int x = 5, y = 2, sum = 0, product = 0, difference = 0;
  float quotient = 0, remainder = 0;
  //Custom variable
  int x1 = 5, y1 = 2, sum1 = 0, product1 = 0, difference1 = 0;
  float quotient1 = 0, remainder1 = 0;

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


  cout << "\nNow put your own value of x and y!"<<endl;
  cout <<"Enter the value of x!"<<endl;
  cin >>x1;
  cout <<"Enter the value of y!"<<endl;
  cin >>y1;

  //Formula
  sum1 = x1 + y1;
  product1 = x1 * y1;
  difference1 = x1 - y1;
  remainder1 = x1 % y1;
  quotient1 = x1 /(double)y1;

  //Printing Results
  cout << "\nThe results are!!"<< endl;
  cout << "Sum = " << sum1 << endl;
  cout << "Product = " << product1 << endl;
  cout << "Difference = " << difference1 << endl;
  cout << "Quotient = " << quotient1 << endl;
  cout << "Remainder = " << remainder1 << endl;
  return 0;
}
