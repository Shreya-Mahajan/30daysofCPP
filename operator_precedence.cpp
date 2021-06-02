#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    // Operator Precedence
    int a = 3, b = 4;
    // int c = (a*5)+b;                               //mul has higher precedence tham add or sub
    int c = ((((a * 5) + b) - 45) + 87); //left to right associativity for add and subtraction
    cout << c;
    return 0;
}
