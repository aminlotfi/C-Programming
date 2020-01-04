#include <iostream>
#include <string.h>

using namespace std;

void passFunc(int a[2][3]){
	cout << "Transposed" <<endl;
	//Transposing
	for (int i=0; i<3; i++){
	for (int j=0; j<2; j++){
		cout << a[j][i] << "  ";
	}
	cout << endl;
	}
}

int main() {
	
	int a[2][3];
	
	//user enter matrix
	cout << "enter the elements of Matrix(2*3): " << endl;
		for (int i=0; i<2; i++){
		for (int j=0; j<3; j++){
			cout << "Enter element a" << i+1 << j+1 << ":";
			cin >> a[i][j];
		}
	}
	//print user's matrix
	cout << endl << "your Matrix is: " << endl;
		for (int i=0; i<2; i++){
			for (int j=0; j<3; j++){
				cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	
	//call function
	passFunc(a);

	system ("pause");
	return 0;
}

