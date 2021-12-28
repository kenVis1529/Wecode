#include <iostream>
using namespace std;
bool symmetry (unsigned long long);
int main (){
    unsigned long long n;
    cin >> n;
    cout << symmetry(n);
	return 0;
}
bool symmetry(unsigned long long n){
    unsigned long long m = n;
    int t = 0;
    while (n != 0) {
        t = t * 10 + n % 10;
        n /= 10;
    }
    if (t == m) return 0;
    else return 1;
}