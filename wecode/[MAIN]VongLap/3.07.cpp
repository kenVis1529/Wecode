#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n, k = 0;
    double pi = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        pi += (pow(-1, i) / (2 * i + 1.0));
    };
    cout << 4 * pi;
    return 0;
}