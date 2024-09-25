#include <iostream>
using namespace std;
int main() {
  	//Creat a c++ program to detemine if alphabet is vowel or consonant
  	//Local variable
	char c;
	//Input
  	cout<<"Enter your desired character: ";
  	cin>>c;
  	
  	//Condition
  	
 	 switch(c)
	  {
		//Function
	 	case'A':
		case'a':
 	 		cout<<"The character that you entered is...  Vowel!";
 	 	break;
 	 	
 	 	case'E':
 	 	case'e':
 	 		cout<<"The character that you entered is...  Vowel!";
 	 	break;
 	 	
	 	case'I':
 	 	case'i':
 	 		cout<<"The character that you entered is...  Vowel!";
 	 	break;
 	
 	 	case'O':
 	 	case'o':
 	 		cout<<"The character that you entered is...  Vowel!";
 	 	break;
 	 	
 	 	case'U':
 	 	case'u':
 	 		cout<<"The character that you entered is...  Vowel!";
 	 	break;

 	 	default:
 	 		cout<<"The character that you entered is...  Constonant!";
	  }
	return 0;		
}
