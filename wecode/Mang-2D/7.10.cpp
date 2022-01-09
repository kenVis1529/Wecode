#include<iostream>
using namespace std;
#define max 100
void nhan(int m, int n, int l, int k, float a[][max], float b[][max], float c[][max]);
int main(){
    int m, n, l, k;
    float a[max][max], b[max][max], c[max][max]{0};
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
    nhan(m, n, l, k, a, b, c);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < k; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
void nhan(int m, int n, int l, int k, float a[][max], float b[][max], float c[][max]){
    for(int i = 0; i < m; i++){
        for (int j = 0; j < k; j++)
        {
            for (int z = 0; z < n; z++){
                c[i][j] += a[i][z] * b[z][j];
            }
        }
    }
}