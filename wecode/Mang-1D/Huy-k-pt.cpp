#include<iostream>
using namespace std;

int main (){
    int n, a[100],p, k;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> p >> k;
    for (int i = 0; i < n; i++){
        if (i >= p){
            a[i] = a[i + k];

        }
    }
    n -= k;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}