#include<iostream>
#define MAXR 100
#define MAXC 100
using namespace std;
void NhapMaTran(float a[][MAXC], int &na, int &nb){
    cin >> na >> nb;
    for (int i = 0; i < na; i++){
        for (int j = 0; j < nb; j++){
            cin >> a[i][j];
        }
    }
}
int main(){
    float a[MAXR][MAXC], b[MAXR][MAXC]; 
    int na, nb;
    NhapMaTran(a, na, nb);
    for (int j = 0; j < nb; j++){
        for (int i = 0; i < na; i++){
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < nb; i++){
        for (int j = 0; j < na; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}