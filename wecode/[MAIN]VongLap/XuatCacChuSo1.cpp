#include <iostream>

using namespace std;
int main() {
    int x;
    cin >> x;
    
    if (x == 0)
        cout << 0;
    else
        while (x > 0)
        {
            cout << x % 10 << endl;
            x /= 10;
        };
    return 0;
}