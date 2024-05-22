#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; 
    }

    int arr[size];

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The largest element in the array is: " << largest << endl;
    cout << "The smallest element in the array is: " << smallest << endl;
	system("Pause") ;
    return 0;
}

