#include <iostream>
using namespace std;

int main(){
	//Local Variables
	int a,b=10,c=-10;
	//Iteration 0 to 10
	cout<<"Smallest to biggest Iteration 0 to 10"<<endl;
		for (a=0;a<=b;a++)
	{
		cout<<"Hello "<<a<<endl;
	}
	//Iteration 0 to -10
	cout<<"\nIteration 0 to -10"<<endl;
	for (a=0;a>=c;a--)
	{
		cout<<"Hello "<<a<<endl;
	}
	return 0;
}

