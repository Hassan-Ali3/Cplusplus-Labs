#include <iostream>
using namespace std;
int main() {

    int size , num=1 ;
    cout << "Enter the size of the sorted array: ";
    cin >> size;

    int arr[size] ;

    for (int i = 0; i < size; ++i) {
	    cout << "Enter the value for number " << num << ": " ;
        cin >> arr[i];
        num++ ;
    }

    int target;
    cout << "Enter the element you want to search for: ";
    cin >> target;

    int left = 0 ;
    int right = size - 1 ;
    int index = -1 ; 

    while (left <= right) {
        int mid = left + (right - left) / 2 ;

        if (arr[mid] == target) {
            index = mid ; 
            break ;
        }

        if (arr[mid] < target) {
            left = mid + 1 ;
        } else {
            right = mid - 1 ;
        }
    }

    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl ;
    } else {
        cout << "Element not found in the array." << endl ;
    }

    return 0 ;
}

