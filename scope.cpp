#include <iostream>

using namespace std;
int x = 20; //globl vrible
void sum()
{
    int p;
    cout << x;
}

int main()
{
    int x = 4; //locl vrible
    char b = 'r';
    double c = 2.33;
    float d = 3.44445566;
    bool y = true;
    sum();
    cout << endl
         << x << endl
         << b << endl
         << c << endl
         << d << endl
         << y;
    return 0;
}