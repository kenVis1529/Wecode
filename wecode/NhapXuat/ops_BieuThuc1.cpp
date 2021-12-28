#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, s;
    cin >> x;
    if (x > 0)
    {
        s = pow(x, 4) + (log10(x) / x);
        cout << round(s * 100) / 100;
    }   
    else
    {
        s = sqrt(2 * abs(x)) + 6 * x;
        cout << round(s * 100) / 100;
    }

    return 0;
}