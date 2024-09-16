#include <iostream>
using namespace std; 
int main(){
	//local variable
	int i=10, i1=0;
	//Using while biggest to smallest 
	cout<<"Biggest to smallest Iteration using While"<<endl;
	while (i>=0)
	{
		cout<<"Hello "<<i<<endl;
		i=i-1;
	}
	//Using while smallest to biggest
	cout<<"\nSmallest to biggest Interation using While"<<endl;
	while (i1<=10)
	{
		cout<<"Hello "<<i1<<endl;
		i1=i1+1;	
	}
	return 0;
}
