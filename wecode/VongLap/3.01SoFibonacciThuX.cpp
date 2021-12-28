#include <iostream>

using namespace std;
int main() {
    int x, rs = 1, f1 = 1, f2 = 1;
    cin >> x;
    if ((x < 1) || (x > 30)){
        cout << "So " << x << " khong nam trong khoang [1,30].";
    } 
    else {
        for (int i = 3; i <= x; i++) {
            rs = f1 + f2;
            f1 = f2;
            f2 = rs;
        };
        cout << rs;
    };
    return 0;
}
/*
Viết chương trình nhập vào số nguyên x sao cho 1 ≤ x ≤ 30. Nếu x không thỏa điều kiện, 
chương trình xuất ra màn hình thông báo “So <x> khong nam trong khoang [1,30].”. 
Nếu x nằm trong khoảng [1,30], chương trình xuất ra màn hình số Fibonacci thứ x.

Input
Một số nguyên x

Output
Thông báo “So <x> khong nam trong khoang [1,30].” nếu x không hợp lệ

Ngược lại, xuất ra màn hình số Fibonacci thứ x
*/