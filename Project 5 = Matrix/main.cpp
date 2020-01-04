//Project 5 = Multiply of two Matrices
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	int a[3][4];
	static int c[3][3];
	int b[4][3] = {{3, 8, 9},{11, 13, 5},{12, 7, 6},{4, 14, 18}};
	
	//user enter the first matix
	cout << "Enter the elements of Martix (3*4): " << endl;
	for(int i=0; i<3; i++){
		for (int j=0; j<4; j++){
			cout << "Enter Element a" << i+1 << j+1 << ": ";
			cin >> a[i][j];
		}
	}
	
	//multiply of two matrices
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<4; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	//resault
	cout << endl << "The Multiply of two Matrices is: " << endl;
	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << c[i][j] << "   ";
		}
		cout << endl;
	}
	 
	system ("pause");
	return 0;
}
