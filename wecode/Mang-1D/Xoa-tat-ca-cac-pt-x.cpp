#include<iostream>
using namespace std;

void del(int a[], int n, int x){
    for (int i = x; i < n-1; i++){
            a[i] = a[i+1];
        }
}
int main (){
    int x, n, a[100], index = 0, t = 1;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            del(a, n, i);
            --i;
            --n;
        }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    } 
    return 0;
}