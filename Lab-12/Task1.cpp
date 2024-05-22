#include <iostream>
using namespace std ;

int main(){
	int arr[10] ;
	int *aptr = arr ;
	int num ;
	
	cout << "Enter 10 integers" << endl ;
	
	for(int i=0 ; i<10 ; i++)
	{
		cout << "Enter Integer "<< i+1 << ": " ;
		cin >> *(aptr + i) ;
	}
	
	cout << endl << endl ;
	
	cout << "The elements stored in the Array" << endl ;
	for(int i=0 ; i<10 ; i++)
	{
		cout <<" Integer " << i+1 << ": " << *(aptr + i) << endl ;
	}
	cout << endl << endl ;
	
	cout << "Enter number to search in the array: " ;
	cin >> num ;
	
	for(int i=0 ; i<10 ; i++) 
	{
		if(num == arr[i])
		{
			cout << "The number is present on index number: " << i << endl ;
			break ;
		}
		if (i>=9){
			cout << "The number is not present in the array." << endl ;
		}
		
	}
	
	cout << endl ;
	
	system ("Pause");
	return 0 ;
}

