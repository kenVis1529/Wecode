#include <iostream>

using namespace std;
void proportion(int, int , int, int, int, int);
int divi(int, int);
int main(){
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    proportion(h1, m1, s1, h2, m2, s2);
    return 0;
}
int divi(int a, int b){
    while (a != b){
        if (a > b) {a -= b;}
        else b -= a;
    }
    return a;
}
void proportion(int h1, int m1, int s1, int h2, int m2, int s2){
    int sen1 = h1*60*60 + m1*60 + s1;
    int sen2 = h2*60*60 + m2*60 + s2;
    int t = divi(sen1, sen2);
    if (t == 1) cout << sen1 << ' ' << sen2;
    else{
        for (int i = 2; i <= t; i++){
            while ((sen1 % i == 0) && (sen2 % i == 0)){
                sen1 /= i;
                sen2 /= i;
            }
            if (divi(sen1, sen2) == 1) break;
        }
        cout << sen2 << ' ' << sen1;
    };
}