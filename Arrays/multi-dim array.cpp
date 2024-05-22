#include <iostream>
using namespace std;

int main() {

    int matrix1 [3][2] , matrix2 [3][2] , Result [3][2] ;
    cout << " Values of Matrix-1" << endl ;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
        	cout << "Enter The value: " ;
            cin >> matrix1[i][j] ; 
        }
    }	
    cout << " Values of Matrix-2" << endl ;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
        	cout << "Enter The value: " ;
            cin >> matrix2 [i][j] ; 
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            Result [i][j] = matrix1 [i][j] + matrix2 [i][j] ; 
        }
    }
	    cout << "Matrix-1 " << endl ;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
			cout << matrix1 [i][j] << "\t" ;
		}
		cout << endl ;
	}
    	cout << "Matrix-2 " << endl ;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
			cout << matrix2 [i][j] << "\t" ;
		}
		cout << endl ;
	}    
    cout << "Resultant Matrix" << endl ;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
			cout << Result [i][j] << "\t" ;
		}
		cout << endl ;
	}
	
    return 0;
}

