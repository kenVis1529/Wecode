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
    int d, count = 0;// Đếm cột khác 0 (count)
    //Đường chéo chính
    for (int i = 0; i < r; i++){
        if (a[i][i] != 1){
            return "No";
        }
    }
    //Ma trận trên = 0
    for (int i = 0; i < r - 1; i++){
        for (int j = i + 1; j < c; j++){
            if (a[i][j] != 0){
                return "No";
            }
        }
    }
    //Ma trận dưới có 1 cột ngẫu nghiên
    for (int j = 0; j < c - 1; j++){
        for (int i = j + 1; i < r; i++){
            if (a[i][j] != 0){
                ++count;
                break;
            }
        }
    }
    if (count > 1) return "No";
    return "Yes";
}