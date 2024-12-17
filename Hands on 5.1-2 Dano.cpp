#include <iostream>
using namespace std;

void multiple(int num, int x){
    bool result = num % x == 0;

    if (result)
        cout << num << " is a multiple of " << x << endl;
    else
        cout << num << " is not a multiple of " << x << endl;
}

int main(){
    int num, x;

    cout << "Enter the number: ";
    cin >> num;


    cout << "Enter the integer of x: ";
    cin >> x;

    multiple(num,x);

    return 0;
}
