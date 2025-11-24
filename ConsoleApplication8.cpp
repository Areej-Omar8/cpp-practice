// This program converts cm to m or km according to user query.
//

#include <iostream>
using namespace std;

int main()
{
    int distance;
    char userchoice;
    double distconvert;
    cout << "Hello user please enter the distance";
    cin >> distance;
    cout << "pick a choice:" << endl;
    cout << "1) meter " << endl;
    cout << "2) kilometer " << endl;
    cin >> userchoice;
    if (userchoice == '1')
    {
        distconvert = distance / 100.0;
         cout << "The distance in meters is:" << distconvert << endl;
    }
    else if (userchoice == '2')
    { 
        distconvert = distance / 100000.0;
        cout << "The distance in Kilometers is:" << distconvert<< endl;
    }

}
