#include <iostream>
#include <iomanip> //header file for manipulators i.e "endl" and  setw(width in number)

using namespace std;

int main()
{

    int a = 3, b = 78, c = 1233;
    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl
         << endl;
    cout << "The value of a is: " << setw(4) << a << endl; // aligns the number to the right accrding to the width ___3
    cout << "The value of b is: " << setw(4) << b << endl; //                                                      __78
    cout << "The value of c is: " << setw(4) << c << endl; //                                                      1233

    return 0;
}