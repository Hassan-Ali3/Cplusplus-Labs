#include <iostream>
using namespace std;
int main() {
	
    int size , num=1 ;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; ++i) {
	    cout << "Enter the value for number " << num << ": " ;
        cin >> arr[i];
        num++ ;
    }

    int target;
    cout << "Enter the element you want to search for: ";
    cin >> target;

    int index = -1;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            index = i;
            break;    
        }
    }

    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
	system("Pause") ;
    return 0;
}

