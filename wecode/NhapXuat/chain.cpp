#include <iostream>

using namespace std;
int main()
{
    int d, r, n;
    cin >> d >> r >> n;
    cout << ((2 * d) + (2 * r)) * n - ((2 * d) * (n - 1));
    return 0;
}
