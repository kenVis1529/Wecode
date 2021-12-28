#include <iostream>

using namespace std;
int main() {
    int n, i, j, f1, f2, c = 0;
    bool check;
    cin >> n;
    f1 = 2;
    f2 = 3;
    for (i = 5; i < n; i += 2) {
        check = true;
        for (j = 3; j <= (i / 2); j += 2) {
            if (i % j == 0) {
                check = false;
                break;
            };
        };
        if (check == true) 
            if (i - f2 == 2)
            {
                cout << f2 << ", " << i << endl;
                f1 = f2; 
                f2 = i;
                ++c;
            } 
            else
                f2 = i;
    };
    cout << "Tong: " << c << " cap so sinh doi < " << n; 
    return 0;
}