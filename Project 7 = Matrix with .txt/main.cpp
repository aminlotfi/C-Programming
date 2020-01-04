//Project 7 = Matrix with .txt
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main() {
	int a[3][3], b[3][3];
	static int c[3][3];
	
	//user must enter the elements of matrix a.
	cout << "Enter the elements of the first Matrix:" <<endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << "Enter element a" << i+1 << j+1 << ": " ;
			cin >> a[i][j];
		}
	}
	
	cout << endl << "This is a first Matrix (you entered): " << endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	
	int value, i=0, j=0;
	
	//import second matrix from .txt file
	ifstream inputFile;
	inputFile.open ("input.txt");
	
	//saving values from txt file in array
	while (inputFile >> value){
		b[i][j] = value;
		j++;
		if (j == 3){
			i++;
			j = 0;
		}
	}
	
	//print the matrix from txt file
	cout << endl << "This is a second Matrix (from txt file): " << endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << b[i][j] << "  ";
		}
		cout << endl;
	}
	
	//multiply of two matrix
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			for (int k=0; k<3; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	//print multiply of two matrix
	cout << endl << "The Multiply of two matrices are: " << endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << c[i][j] << "  ";
		}
		cout << endl;
	}
	
	//Exporting the resault to txt file
	ofstream outputFile;
	outputFile.open ("output.txt");
	
	cout << endl << "**THE RESAULT WAS EXPORTED IN TEXT FILE!!" << endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			outputFile << c[i][j] << endl;
		}
	}
	outputFile.close();
	
	system ("pause");
	return 0;
}
