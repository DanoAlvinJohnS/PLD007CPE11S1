#include <iostream>
using namespace std;

int main(){
  //Create a c++ prgram that applies a calculator function
   char o;
   char c ='y';
   char use = 'y';
   float v1;
   float v2;
   float r;
   bool condition = true;
   
   if (condition == 1)
   cout<<"Calculator 0.1(beta)"<<endl;
   cout<<"First input your desired value that you want to calculate?"<<endl;

  //Input Values
   cout<<"First value: ";
   cin>>v1;
   while (c=='y')
   {	
  //Simple introduction with instructions
   cout<<"Second value: ";
   cin>>v2;

  //Input operator
   cout<<"Now Choose your Operator ";
   cout<<"+ for addition, - for subtraction, * for multiplication, / for Division"<<endl;
   cin>>o;

  //Now the operator
   switch(o){
    case '+':
    r = v1+v2;
    cout<<"The answer is... "<<r<<endl;
    break;

   case '-':
    r = v1-v2;
    cout<<"The answer is... "<<r<<endl;
    break;

   case '*':
    r = v1*v2;
    cout<<"The answer is... "<<r<<endl;
    break;

   case '/':
    if (v2!=0){
      r= (v1/v2);
      cout<<"The answer is... "<<r<<endl;
      break;
      }
      
     else{
    cout<<"0 as divisor is undefined"<<endl;
    break;
     }
   default:{
    cout<<"This type of operation is not a feature yet."<<endl;
    break;
   }
   }
   
   	//Using the calculator again
   cout<<"\nAnother one? y/n (Please input the value as lowercase only) ";
   cin>>c;
   
	//Saving the result as first variable
   if (c=='y'){
    cout<<"Would you like to use the answer as your first variable?"<<endl;
    cin>>use;
   }
   if (use=='y'){
     v1 = r;
     }
	else if (use!='y'){
		cout<<"First value: ";
  		cin>>v1;
  		c='y';
	}

    else if (c!='y'){
     cout<<"Thank you for using me!"<<endl;
     condition = true;
     break;
    }
    
   }
   return 0;
   }		 
  

