#include <iostream>
#include <string>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    // Loop through each element in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
			}
    }
    return -1; 
}

int main() {
    
    int arr[] = {15, 22, 8, 7, 42, 5, 19, 31, 9, 2, 47, 24};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    int target;
    cout << "Enter a number to search: ";
    cin >> target;

    int index = linearSearch(arr, size, target);

    if (index != -1) {
        cout << "Element " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Element " << target << " was not found in the list." << endl;
    }

    return 0;
}

