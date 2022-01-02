#include<iostream>
using namespace std;
bool prime(int);
int main(){
    int n, a[100], check = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (prime(a[i])) {
            cout << a[i] << " ";
            check = 1;
        }
    }
    if (check == 0) cout << 0;
    return 0;
}
bool prime(int n){
    if (n == 2) return true;
    if ((n == 1) || (n % 2 == 0)) return false;
    for (int i = 3; i <= n / 2; i += 2){
        if (n % i == 0) return false;
    }
    return true;
}