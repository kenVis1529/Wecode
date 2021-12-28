#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x, y;
    double rs;
    cin >> x >> y;

    rs = (x / (y * 1.0)) / 3.6;
    if (rs >= 1)
        cout << setprecision(16) << rs;
    else    
        cout << setprecision(15) << rs;
    return 0;
}