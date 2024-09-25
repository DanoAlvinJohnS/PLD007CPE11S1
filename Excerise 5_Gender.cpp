#include <iostream>
using namespace std;
int main() {
  	//Creat a c++ program to detemine if alphabet is vowel or consonant
  	//Local variable
	char c;
	char r ='y';
	//Input
	while (r='y'){
  	cout<<"Enter your Gender: ";
  	cin>>c;
  	
  	//Condition
 	 switch(c)
	  {
		//Function
	 	case'B':
		case'b':
 	 		cout<<"Your gender is... Boy/Man!";
 	 	break;
 	 	
 	 	case'G':
 	 	case'g':
 	 		cout<<"Your gender is...  Girl/Women!";
 	 	break;
 	
 	 	default:
 	 		cout<<"Your gender does not exist!"<<endl;
 	 	break;
	  }
	  cout<<"\nDo you want to identify your gender again?"<<endl;
	  cin>>r;
	}
	return 0;		
}
