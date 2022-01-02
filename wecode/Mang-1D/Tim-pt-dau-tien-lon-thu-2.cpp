#include<iostream>
using namespace std;
int main (){
    int n, a[100], max1, max2;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    max1 = -1;
    max2 = -1;
    for (int i = 0; i < n; i++){
        if (a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }
        if ((a[i] > max2) && (max1 != a[i])){
            max2 = a[i];
        }
    }
    if (max2 == -1) cout << 0;
    else{
        cout << max2;   
    }
    return 0;
}