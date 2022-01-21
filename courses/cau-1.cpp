#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *y = &x;
    y = x + y;
    cout << "x=" << x << "\t" << "y=" << y;
    return 0;
}