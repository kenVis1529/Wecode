#include<iostream>
using namespace std;

int main(){
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if (n == 0){
        cout << "Mang rong";
    }
    int countc = 0, countl = 0;
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0) ++countc;
        else ++countl;
        if ((countl > 0) && (countc > 0)){
            cout << "Mang khong chua toan so chan hay so le";
            return 0;
        }
    }
    if (countc == n) cout << "Mang chua toan so chan";
    else cout << "Mang chua toan so le";
    return 0;
}