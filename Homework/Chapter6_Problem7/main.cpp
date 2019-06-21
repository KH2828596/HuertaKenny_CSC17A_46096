//Kenny Huerta
//Program: Convert Fahrenheit to Celsius

#include <iostream>
using namespace std;

int Celsius(int);

int main ()
{
    int temperatureF = 0;
    int temperatureC = 0;
    
    
    cout << "This program converts Fahrenheit to Celsius.\n"
         << "Enter a temperature in Fahrenheit..." << endl;
    cin >> temperatureF;
    
    
    temperatureC = Celsius(temperatureF);
   
    
    cout << temperatureF << " Fahrenheit equals " << temperatureC << " Celsius" <<  endl;
    
    for (int i = -5; i < 20; i++)
    {
        int temp;
        temp = Celsius(i);
        
        cout << i <<  " Fahrenheit equals " << temp << " Celsius" <<  endl;
        
    }
        
    
    
    return 0;
}


int Celsius(int temp)
{
    temp = (temp - 32) * 5/9;
    return temp;
}