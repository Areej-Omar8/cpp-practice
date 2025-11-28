// This Program takes the number from the user and prints out of it is positive or negative or zero.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Hello user, please enter a number";
    cin >> x;
    if (x > 0)
        cout << "Positive Number";
    else if (x < 0)
        cout << "Negative Number";
    else
        cout << "Zero";
    return 0;

}

