#include <iostream>

using namespace std;

int greatestminor(int a[], int n);
int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << greatestminor(a, n);
    return 0;
}
int greatestminor(int a[], int n){
    int max = -9999999, vt = -1;
    for (int i = 1; i < n; i++){
        if ((a[i] < 0) && (a[i] > max)){
            max = a[i];
            vt = i;
        }
    }
    return vt;
}