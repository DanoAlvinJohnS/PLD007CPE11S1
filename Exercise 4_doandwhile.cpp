#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;
int main(){
	//Using do & while
	//Biggest to smallest Iteration
	cout<<"Biggest to smallest Iteration using Do & While"<< setw (40) <<"Smallest to Biggest Iteration"<<endl;
	int i=4, i1=1;
	do
	{
		cout<<"Value of i is "<<i<< setw(56) <<"Value of i is "<<i1<<endl;
		i--, i1++;
	}
	while(i<=4 && i>=1);
	while(i1>=1 && i1<=4);
	return 0;
}
    


