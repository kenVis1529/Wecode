#include <iostream>

using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    while ((a != b) && (a < 100000) && (b > 0)){
        ++a;
        --b;
        if (a == b)
        {
            cout << "FALSE";
            return 0;
        };
    };
    cout << "TRUE";
    return 0;
}