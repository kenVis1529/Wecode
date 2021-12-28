#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int n, m, dem = 0;
    cin >> n;

    m = abs(n);
    if (n == 0)
        ++dem;
    else 
        while (m > 0)
        {
            m /= 10;
            ++dem;
        };
    cout << "So " << n;
    cout << " co " << dem << " chu so";
    if (n < 0) cout << " va 1 dau";
    return 0;
}
