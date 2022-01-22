#include <iostream>
using namespace std;
bool checknt(int n);
int main()
{
    int n, a[100], b[100]{0};
    cin >> n;
    for (int i = 0; i <n; i++){
        cin >> a[i];
        if (checknt(a[i])) b[i] = 1;
    }
    for (int i = 0; i < n; i++){
        if (b[i] == 1) 
            cout << -1 << " " << a[i] << " ";
        else 
            cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        if (b[i] == 1) cout << i << " ";
    }
}
bool checknt(int n){
    if (n == 2) return true;
    if ((n == 1) || (n % 2 == 0)) return false;
    for (int i = 3; i < n; i += 2){
        if (n % i == 0) return false;
    }
    return true;
}