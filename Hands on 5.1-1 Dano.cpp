#include <iostream>
using namespace std;

// Function to reverse the bits of an unsigned int
unsigned int reversedBits(unsigned int n){
    unsigned int reversed = 0;
    int bit32 = 32;
    // Using loop to reserve bits
    for (int i = 0; i < bit32; i++){
        reversed <<= 1;
        reversed |= (n & 1);
        n >>= 1;
    }
    return reversed;
}

// Function for printing bits
void printbits(unsigned int num){
    for (int i = 31; i >= 0; i--){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(){
    unsigned int num;
    cout << "Enter an unsigned int: ";
    cin >> num;

    //Printing original bits
    cout << "Original bits: ";
    printbits(num);

    unsigned int reversedNum = reversedBits(num);

    cout << "Reserved bits: ";
    printbits(reversedNum);
    return 0;
}
