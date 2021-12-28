#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, s;
    cin >> x;
    if (x > 10) 
    {
        s = x + sqrt(x);
        cout << s;
    }
    else if (x >= -10)
    {
        s = exp(x);
        cout << s;
    }
    else
    {
        s = pow(x, 3) - 2 * x + 1 / x;
        cout << s;
    }
    return 0;
}