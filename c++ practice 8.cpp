// This Program asks the user to enter a character and according to it's ASCII code decides if its a number, special character, or letter.
//

#include <iostream>
using namespace std;

int main()
{
	char c;
   cout << "Hello user, please enter a Character";
   cin >> c;
   if (c >= 0 && c <= 47 || c >= 58 && c <= 64)
	   cout << "Special Character";
   else if (c >= 48 && c <= 57)
	   cout << "Number";
   else if (c >= 65 && c <= 90)
	   cout << "Capital Letter";
   else if (c >= 97 && c <= 122)
	   cout << "Small Letter";
}

