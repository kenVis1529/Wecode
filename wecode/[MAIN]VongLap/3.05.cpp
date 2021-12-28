#include <iostream>
#include <math.h>
using namespace std;

int giaithua(int n);
float phanso(int n);
int main() {
    int n, s1 = 0, s2 = 0;
    float s3 = 0;
    cin >> n;   

    for (int i = 1; i <= n; i++)
        s1 += pow(i, i);

    for (int i = 1; i <= n; i++)
        s2 += giaithua(i);
    
    for (int i = 1; i <= n; i++)
        s3 += phanso(i);

    cout << s1 << endl << s2 << endl << s3;
    return 0;
}
float phanso(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    };
    return (1 / (result*1.0));
}
int giaithua(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    };
    return result;
}