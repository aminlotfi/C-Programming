//Project 3 = Solve the equation
#include <iostream>
#include <string.h>

using namespace std;

double diff(int n, double x0, double x1){
	double nextTerm;
	
	for (int i=1; i <= n-2; i++){
		nextTerm = (2*x0)+(0.01*x1*x1);
		x0 = x1;
		x1 = nextTerm;
	}
	return nextTerm;
}

int main() {
	int n;
	double x0, x1;
	
	cout << "Enter n: " << endl;
	cin >> n;
	
	//first number of series
	cout << "Enter x0: " << endl;
	cin >> x0;
	
	//second number of series
	cout << "Enter x1: " << endl;
	cin >> x1;
	
	if (n == 1 || n == 2){
		cout << "NOT Valid! Enter n > 2";
		exit (0);
	}
	
	//call function
	cout << endl << "Answer: " << diff(n, x0, x1) << endl;
		
	system ("pause");
	return 0;
}
