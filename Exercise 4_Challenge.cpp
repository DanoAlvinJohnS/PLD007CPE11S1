#include <iostream>
using namespace std;
int main(){
	//Using do & while
	//Biggest to smallest Iteration
	cout<<"Integers less than 10 but not less than 3"<<endl;
	int i1=9;
	do
	{
		cout<<"Value of i is "<<i1<<endl;
		i1--;
	}
	while(i1>=3 && i1<=9);
	return 0;
}
    


