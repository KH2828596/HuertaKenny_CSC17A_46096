//Kenny Huerta
//Program: Convert Celsius to Fahrenheit

#include <iostream>
using namespace std;

int convertCelsius(int);

int main ()
{
    int temperatureF = 0;
    int temperatureC = 0;
    
    
    cout << "This program converts Celsius to Fahrenheit.\n"
         << "Enter a temperature in Celsius..." << endl;
    cin >> temperatureC;
    
    
    temperatureF = convertCelsius(temperatureC);
   
    
    cout << temperatureC << " Celsius equals " << temperatureF << " Fahrenheit" <<  endl;
    
    
    return 0;
}


int convertCelsius(int temp)
{
    temp = (temp * 9/5) + 32;
    return temp;
}