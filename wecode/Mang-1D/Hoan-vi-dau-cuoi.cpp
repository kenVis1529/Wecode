#include<iostream>
using namespace std;

int main(){
    int n, a[51];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int t = a[0];
    a[0] = a[n-1];
    a[n-1] = t;
    for (int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;   
}