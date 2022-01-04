#include<iostream>
using namespace std;
#define max 100

int main(){
    int na, nb;
    float a[max][max], sum = 0;
    cin >> na >> nb;
    for(int i = 0; i < na; i++){
        for(int j = 0; j < nb; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < na; i++){
        sum += a[i][i];
    }
    cout << sum;
    return 0;
}