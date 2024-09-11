#include <iostream>
using namespace std;

int main()
{

//initialization of the value

  float grade;
  char cont = 'y'; 
  char cont2 = 'n';
  while (cont == 'y')

//Conditions

    
  {  
    cout<<"\nEnter your grade: ";
    cin>>grade;
    if (grade >= 94 && grade <= 100){
      cout<<"Excellent"<<endl;
    cout<<"Remarkable!! Your GPA is 1!"<<endl;
    cout<<"You are Qualified to be a Suma Cum laude"<<endl;  
    }  
    else if (grade >= 88.5 && grade <= 93.99){
      cout<<"Superior"<<endl;
    cout<<"Extraodinary! Your GPA is 1.75"<<endl;
    cout<<"You are Qualified to be a Magna Cum laude"<<endl;
    }
    else if (grade >= 83 && grade <= 88.49 ){
      cout<<"Meritorious"<<endl; 
      cout<<"Incredible! You have a GPA of 1.50"<<endl; 
      cout<<"You are Qualified to be a Magna Cum laude"<<endl;
    }
    else if (grade >= 77.5 && grade <= 82.99 ){
      cout<<"Very Good"<<endl;
    cout<<"Impressive! Your GPA is 1.75"<<endl;
      cout<<"You are Qualified to be a Cum laude"<<endl;  
    }    
    else if (grade >= 72 && grade <= 77.49){
      cout<<"Good"<<endl; 
      cout<<"Decent! Your GPA is 2.00"<<endl; 
      cout<<"You are Qualified to be Cum laude"<<endl;  
   }
    else if (grade >= 65.5 && grade <= 71.99){
      cout<<"Very Satisfactory"<<endl; 
      cout<<"Your GPA is 2.25"<<endl; 
    }
    else if (grade >= 61 && grade <= 65.49){
      cout<<"Satisfactory"<<endl;
      cout<<"Your GPA is 2.50"<<endl; 
    }
    else if (grade >= 55.5 && grade <= 60.99){
      cout<<"Fair"<<endl; 
      cout<<"Your GPA is 2.75"<<endl; 
    }
    else if (grade >= 50 && grade <= 55.49){
      cout<<"Passing"<<endl; 
      cout<<"Your GPA is 3.00-4.00"<<endl;
    }
    if (grade >= 0.1 && grade <= 49.99){
      cout<<"Failed"<<endl;
    cout<<"Your GPA is 5.00-8.00"<<endl; 
    }
     cout<<"\nDo you want to continue? Y/N"<<endl;
    cin>>cont;
  }
//If No
      while (cont2 == 'n')
  {
    cout<<"\nThank you for testing!";
    cont2 = 'y';
  } 
  return 0;
  }
