

#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    cout << "hello user, please pick an operation" << endl;
    cout << "(1) power" << endl;
    cout << "(2) squareRoot" << endl;
    cout << "(3) maxOfthree" << endl;
    int operand_1, operand_2, operand_3;
    char userinput;
    cin >> userinput;
    if (userinput == '1')
    {
        cout << "please pick two operands";
        cin >> operand_1 >> operand_2;
        cout << "operand_1 raised to the power of operand_2 is:" << pow(operand_1, operand_2);

    }
    if (userinput == '2')
    {
        cout << "please pick one operand";
        cin >> operand_1;
        if (operand_1 > 0)
            cout << "The square root of operand_1 is:" << sqrt(operand_1);
        else
            cout << "this operation cannot be applied";
   
    }
    
    else if (userinput == '3')
    {
        cout << "please enter three operands";
        cin >> operand_1 >> operand_2 >> operand_3;
        cout << "The maximum value is:" << max(max(operand_1,operand_2),max(operand_2,operand_3));
    }
    return 0;
}

