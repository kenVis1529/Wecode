#include <iostream>

using namespace std;
int main() {
    int k, red = 0, yel = 0;
    cin >> k;
    for (int i = 1; i <= k; i += 2)
        yel += i*i;
    for (int i = 2; i <= k; i += 2)
        red += i*i;
    cout << red - yel;
    return 0;
}