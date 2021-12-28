#include <iostream>
#include <iomanip>
using namespace std;
void input(), multitable();
int main(){
    input();
    return 0;
}
void multitable(){
    int n;
    cout << "Moi ban nhap 1 so: ";
    cin >> n;
    cout << endl;
    while ((n < 1) || (n > 9)){
        cout << "Moi ban nhap 1 so tu 1 den 9: ";
        cin >> n;
    };
    cout << "BANG CUU CHUONG: " << n << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 10; j++){
            cout << setw(3) << j*i << " ";
        };
        cout << endl;
    }
}
void input(){
    int x;
    char n;
    cout << "MENU";
    cout << "\nt) Tao ra bang cuu chuong";
    cout << "\nd) Thoat chuong trinh";
    cout << "\nMoi ban lua chon: ";
    cin >> n;
    cout << endl;
    if ((n != 't') && (n != 'd')) {
        cout << "Lua chon khong hop le\n";
        input();
    }
    else if (n == 'd'){
        cout << "Ban da chon thoat khoi chuong trinh. Cam on ban da su dung!";
    } else {
        multitable();
        input();
    };
}