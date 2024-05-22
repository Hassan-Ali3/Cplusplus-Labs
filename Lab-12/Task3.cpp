#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std ;

void reverse_string (string *);

int main(){
	string str ;
	cout << "Enter a string to reverse: " ;
	getline (cin , str) ;
	cout << "String You Entered = " << str << endl ;	
	reverse_string (&str) ;

	cout << "Reversed String = " << str << endl ;
	system ("Pause");
	 
	return 0 ;
}

void reverse_string (string *ch)
{
	int size = ch->length();
	for (int i=0 ; i<size/2 ; i++)
	{
		char temp = (*ch)[i];
        (*ch)[i] = (*ch)[size - i - 1];
        (*ch)[size - i - 1] = temp;
	}
}
