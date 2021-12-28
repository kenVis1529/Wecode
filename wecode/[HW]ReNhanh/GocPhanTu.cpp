#include <iostream>

using namespace std;
int main(){
    int d, r, g1 = 0, g2 = 90, g3 = 180, g4 = 270;
    cin >> d;

    r = d % 360;
    if (r > g4)
        cout << 1;
    else if (r > g3)
        cout << 2;
    else if (r > g2)
        cout << 3;
    else    
        cout << 4;
    return 0;
}