//Project 4 = Fibonnaci
#include <iostream>
#include <string.h>

using namespace std;

int fibo(int x) {
	if((x==1)||(x==2)) {
    	return(1);
	}else {
		return(fibo(x-1)+fibo(x-2));
   	}
}

int main() {

	int x, i=1;
   	cout << "Enter the number of terms of series : ";
   	cin >> x;
   
   	cout << endl << "Fibonnaci Series : " << endl;

   	while(i <= x) {
    	cout << fibo (i) << ", ";
    	i++;
	}
	cout <<endl;

	system ("pause");
	return 0;
}
