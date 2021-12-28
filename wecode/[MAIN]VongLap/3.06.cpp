#include <iostream>
#include <math.h>
float giaithua(int n);
using namespace std;
int main() {
    int n, x, s1 = 1, s2 = 1, i;
    double s3 = 1;
    cin >> n >> x;

    for (i = 1; i <= n; i++)
        s1 += pow(x, i);

    for (i = 1; i <= n; i++)
    {
        s2 += pow(x, i * 2);
    };

    for (i = 1; i <= n; i++)
        s3 += pow(x, i) / giaithua(i);

    cout << s1 << endl << s2 << endl << s3;
    return 0;
}
float giaithua(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    };
    return result;
}