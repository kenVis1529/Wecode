#include<iostream>
using namespace std;
int main (){
    int n, a[100], max, count = 1;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    max = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > max) {
            max = a[i];
            count = 1;
        } else if (a[i] == max){
            ++count;
        }
    }
    cout << max << endl << count;
    return 0;
}