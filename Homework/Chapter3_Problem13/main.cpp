//Kenny Huerta
//Program: Convert U.S. dollar to Yen/Euros

#include <iostream>
using namespace std;

float YEN_PER_DOLLAR = 98.93;
float EUROS_PER_DOLLAR = 0.74;


void convertCurrency(float);

int main ()
{
    float dollar;
    
    cout << "Input the U.S. dollar amount to be converted" << endl;
    cin >> dollar;
    
    convertCurrency(dollar);
    
    return 0;
}

void convertCurrency(float dollar)
{
    float tempU;
    float tempY;
    
    tempY = dollar * YEN_PER_DOLLAR;
    tempU = dollar * EUROS_PER_DOLLAR;
    
    cout << setprecision(2) << fixed << showpoint << endl;
    cout << dollar << " dollars in Euros is " << tempU << endl;
    cout << dollar << " dollars in Yen is " << tempY << endl;
    
}
