#include<iostream>
using namespace std;
int main(){
    int n, a[10000];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int min = a[0], countm = 1;
    for (int i = 1; i < n; i++){
        if (a[i] < min) {
            min = a[i];
            countm = 1;
        }
        else if (a[i] == min) countm++;
    }
    cout << min << " " << countm;
    return 0;
}