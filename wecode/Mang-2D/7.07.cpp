#include<iostream>
using namespace std;
#define max 100
string check(float a[][max], int r, int c);
int main(){
    int na, nb;
    float a[max][max];
    cin >> na >> nb;
    for(int i = 0; i < na; i++){
        for(int j = 0; j < nb; j++)
            cin >> a[i][j];
    }
    cout << check(a, na, nb);
    return 0;
}
string check(float a[][max], int r, int c){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (a[i][j] != a[j][i]){
                return "No";
            }
        }
    }
    return "Yes";
}