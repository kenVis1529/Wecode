#include<iostream>
using namespace std;
int main(){
    int n, a[10], x, y;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x >> y;
    //OUTPUT
    for (int i = 0; i < n; i++){
        if (a[i] == x) a[i] = y;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;
}   