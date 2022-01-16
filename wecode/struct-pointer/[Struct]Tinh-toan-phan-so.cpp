#include <iostream>
using namespace std;
struct PHANSO
{
    int tu;
    int mau;
} PS1, PS2, PS3;
int ucln(int a, int b){
    a = abs(a);
    b = abs(b);
    while (a * b != 0){
        if (a > b) a %= b;
        else b %= a;
    }
    return a + b;
}
void rutgon(PHANSO &a){
    int uc = ucln(a.tu, a.mau);
    a.tu /= uc;
    a.mau /= uc;
}
void doidau(int &t, int &m){
    if (m < 0) {
        t = -t;
        m = -m;// 6/-1 
    }
}
void cong(PHANSO a, PHANSO b, PHANSO &c){
    c.mau = a.mau * b.mau;
    c.tu = a.tu * b.mau + b.tu * a.mau;
}
void tru(PHANSO a, PHANSO b, PHANSO &c){
    c.mau = a.mau * b.mau;
    c.tu = a.tu * b.mau - b.tu * a.mau;
}
void nhan(PHANSO a, PHANSO b, PHANSO &c){
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
}
void chia(PHANSO a, PHANSO b, PHANSO &c){
    c.tu = a.tu * b.mau;
    c.mau = a.mau * b.tu;
}
int main(){
    int t, m;
    char pheptinh;
    PHANSO PS1, PS2, PS3;
    cin >> PS1.tu >> PS1.mau >> PS2.tu >> PS2.mau >> pheptinh;

    if ((PS1.mau == 0) || (PS2.mau == 0)){
        cout << "Khong thoa yeu cau bai toan";
        return 0;
    };
    //Tử != 0
    if (pheptinh == '+')
        cong(PS1, PS2, PS3);
    else if (pheptinh == '-')
        tru(PS1, PS2, PS3);
    else if (pheptinh == '*')
        nhan(PS1, PS2, PS3);
    else if (pheptinh == '/')
    {
        if (PS2.tu == 0){
            cout << "Khong thoa yeu cau bai toan";
            return 0;
        }
        chia(PS1, PS2, PS3);
    }
    //Tử = 0
    if (PS3.tu == 0){// 0/1
        cout << 0;
        return 0;
    } 

    //Tử > 0, mẫu < 0
    doidau(PS3.tu, PS3.mau);

    //Rút gọn
    rutgon(PS3);

    //Mẫu = 1
    if (PS3.mau == 1){// 6/1
        cout << PS3.tu;
        return 0;
    }   

    cout << PS3.tu << "/" << PS3.mau;    
    return 0;
}