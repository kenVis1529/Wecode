#include <iostream>

using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;

    if (a == 0)
        if (b == 0)
            cout << "ℝ";
        else    
            cout << "Ø";
    else
        if (b == 0)
            cout << "{" << 0 << "}";
        else
            cout << "{" << -b / a << "}";
    return 0;
} 
