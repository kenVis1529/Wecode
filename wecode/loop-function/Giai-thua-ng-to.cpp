#include <iostream>
using namespace std;
unsigned long long multiprime(int);
bool prime(int);
int main (){
    int n;
    cin >> n;
    cout << multiprime(n);
	return 0;
}
bool prime(int n){
    if (n == 1) return false;
    for (int i = 3; i <= (n / 2); i += 2){
        if (n % i == 0) return false;
    }
    return true;
}
unsigned long long multiprime(int n){
    unsigned long long s = 2;
    for (int i = 3; i <= n; i += 2){
        if (prime(i)) s *= i;
    }
    return s;
}