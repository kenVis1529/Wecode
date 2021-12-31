#include<iostream>
using namespace std;

int main(){
    int n, a[10000], x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;

    int countx = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == x) ++countx;
    }
    cout << countx;
    return 0;
}