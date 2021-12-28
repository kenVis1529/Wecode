#include <iostream>

using namespace std;
void sdigit(int);
int main(){
    int n;
    cin >> n;
    sdigit(n);
    return 0;
}
void sdigit(int n){
    int r, l;
    int s = 0;
    while (n != 0){
        s += n % 10;
        n /= 10;
    };
    cout << s;
    if (s / 10 == 0){
        l = 0;
        r = s;
    } else {
        r = s % 10;
        while (s != 0){
            if (s / 10 == 0)
                l = s;
            s /= 10;
        };
    };
    cout << ", " << l << ", " << r;
}