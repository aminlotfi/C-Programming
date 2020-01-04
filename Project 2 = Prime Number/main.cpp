//Project 2 = Prime Number
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	int n, counter = 1, sum=0;
	bool flag = true;
	
	cout << "How many prime number do you want!?" << endl;
	cin >> n;
	
	cout << "Prime numbers: " << endl;
	
	for (int i = 2; counter <= n; i++){
		flag = true;
		for (int j = 2; j <= i / 2; j++){
			if (i % j == 0){
			flag = false;
			}	
		}
		if (flag == true){
			cout << i << ", ";
			sum += i;
			counter++;
		}
	}
	
	cout << endl << "Sum of Primes: " << sum << endl;
	
	system ("pause");
	return 0;
}
