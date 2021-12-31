#include<iostream>
using namespace std;
int main(){
    int i, j, m, n;
    float a[100][100];
    cin >> m >> n;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}