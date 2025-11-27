// This Program reads the temperature in celsius and converts it to Fahrenheit or Kelvin based on user's query.
//

#include <iostream>
#include<cmath>
using namespace std;



int main()
{
	double temp;
	char userinput;
   cout << "Hello user please enter the temperature.";
   cin >> temp;
   cout << "pick the unit you prefer, K for kelvin and F for fahrenheit.";
   cin >> userinput;
   if (userinput == 'K')
	   cout << (temp + 273.15);
   else if (userinput == 'F')
	   cout << (temp * 9 / 5);
   else
	   cout << "invalid choice";

}
