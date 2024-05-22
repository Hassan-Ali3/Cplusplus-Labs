#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int arr[size] =  {2,8,5,7,6};
	
    char sortOrder;
    cout << "Enter 'A' for ascending or 'D' for descending order: ";
    cin >> sortOrder;
              
    bool ascending = (sortOrder == 'A' || sortOrder == 'a') ;
	bool descending = (sortOrder == 'B' || sortOrder == 'b') ;

    for (int i = 0; i < size - 1; ++i) 
	{
        for (int j = 0; j < size - i - 1; ++j) 
		{
            if (ascending) 
			{
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } 
            else {
                if (arr[j] < arr[j + 1]) {

                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    cout << "Sorted array in ";
    if (ascending) {
        cout << "ascending order:";
    } else {
        cout << "descending order:";
    }

    for (int i = 0; i < size; ++i) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}

