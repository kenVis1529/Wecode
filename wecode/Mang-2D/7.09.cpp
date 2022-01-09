#include<iostream>
using namespace std;
#define max 100
void cong(int m, int n, float a[][max], float b[][max], float c[][max]);
int main(){
    int m, n, l, k;
    float a[max][max], b[max][max], c[max][max];
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    cin >> l >> k;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < k; j++)
            cin >> b[i][j];
    }
    cong(m, n, a, b, c);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
void cong(int m, int n, float a[][max], float b[][max], float c[][max]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
}