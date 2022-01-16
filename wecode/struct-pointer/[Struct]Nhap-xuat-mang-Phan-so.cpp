#include <iostream>
using namespace std;
struct PHANSO
{
    int tu;
    int mau;
};
int ucln(int a, int b){
    a = abs(a);
    b = abs(b);
    if ((a == 1) || (b == 1)){
        return 1;
    }
    while (a != b){
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}
void doidau(int &t, int &m){
    if (m < 0) {
        t = -t;
        m = -m;// 6/-1 
    }
}
void rutgon(PHANSO &a){
    int uc = ucln(a.tu, a.mau);
    a.tu /= uc;
    a.mau /= uc;
}
int main(){
    int n;
    PHANSO ps[9999];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ps[i].tu >> ps[i].mau;
    }
    for (int i = n - 1; i >=0; i--){
        if (ps[i].mau == 0) {// 6/0
            cout << "Khong thoa yeu cau bai toan\n"; 
            continue;
        }
        else if (ps[i].tu == 0){// 0/6
            cout << 0 << endl ;
            continue;
        }
        doidau(ps[i].tu, ps[i].mau);
        rutgon(ps[i]);
        if (ps[i].mau == -1) {
            cout << -ps[i].tu << endl; // 6/-1
            continue;    
        }
        else if (ps[i].mau == 1) {
            cout << ps[i].tu << endl; // 6/1
            continue;    
        }
        cout << ps[i].tu << "/" << ps[i].mau << endl; // 6/5
    }
    return 0;
}