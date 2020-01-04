// Project 1 = Convert Temperatures
#include <iostream>
#include <string.h>

using namespace std;

int main() {
   double C, F, K;
   
   cout << "Enter a Temperature (Unit= Celsius):" << endl;
   // Unit of This temperature is Celsius. 
   cin >> C;
   
   // convert celsius to fahrenheit:
   F = (1.8*C) + 32;
   
   // convert celsius to kelvin:
   K = C + 273;
   
   // 10 condition for Temperatures
   if (0 <= C && C <= 10){
       cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" << " " << K << " " << "in Kelvin and the state is Too Low" << endl;
   }
   else if (10 < C && C <= 20){
        cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" << " " << K << " " << "in Kelvin and the state is Very Low" << endl;
    }
   else if (20 < C && C <= 30){
        cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" << " " << K << " " << "in Kelvin and the state is Low" << endl;
    }
    else if (30 < C && C <= 40){
        cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" <<  " " << K << " " << "in Kelvin and the state is Pale Low" << endl;
    }
    else if (40 < C && C<= 50){
        cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" << " " << K << " " << "in Kelvin and the state is Well Low" << endl;
    }
    else if (50 <= C && C <= 60){
        cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" << " " << K << " " << "in Kelvin and the state is well High" << endl;
    }
    else if (60 < C && C <= 70){
        cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" << " " << K << " " << "in Kelvin and the state is Pale High" << endl;
    }
    else if (70 < C && C <= 80){
        cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" <<  " " << K << " " << "in Kelvin and the state is High" << endl;
    }
    else if (80 < C && C <= 90){
        cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" << " " << K << " " << "in Kelvin and the state is Very High" << endl;
    }
    else if (90 < C && C <= 100){
        cout << "The Temperature is" << " " << C << " " << "in Celsius or" << " " << F << " " << "in Fahrenheit or" <<  " " << K << " " << "in Kelvin and the state is Too High" << endl;
    }
    // If user enter a number out of the range show This message! 
    else if ( C>100 || C<0 ){
        cout << "Not Valid! Enter number between this range [0 , 100]" << endl;
    }
    
    system ("pause");
    return 0;
}
