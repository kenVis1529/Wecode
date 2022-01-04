/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include<iostream>
#define MAXR 100
#define MAXC 100
using namespace std;
void NhapMaTran(int a[][MAXC], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
}
bool isMaTranDonVi(int a[][MAXC], int n){
    for (int i = 0; i < n; i++){
        if (a[i][i] != 1) return false;
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i][j] != 0) return false;
        }
    }
    for (int j = 0; j < n; j++){
        for (int i = j + 1; i < n; i++){
            if (a[i][j] != 0) return false;
        }
    }
    return true;
}
//END CODE
int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout <<  std::boolalpha << isMaTranDonVi(a, n);
    return 0;
}
