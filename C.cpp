// This program stimulates a shop billing system.
//

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    x = 100;
   
    cout << "hello user, please enter the amount of items you have bought";
    cin >> z;
    y = x * z;
    if (y > 1000)
    {
        cout << "Congratulations you have recieved a 10% discount, your total now is: " << y - (y * 0.10);

    }
    else
        cout << "your total is: " << y;
}
