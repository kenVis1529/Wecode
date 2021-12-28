#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    //Dương, <= n, chan, tăng dần
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    };
    cout << endl;
    //Dương, <= n, le, giam dan
    if (n % 2 == 0)
        --n;
    for (int i = n; i >= 1; i -= 2)
    {
        cout << i << " ";
    }

    cout << endl;
    //Chuỗi "Done"
    cout << "Done";
    return 0;
}
/*
Viết chương trình Xuất 2 dãy số có thứ tự như sau:
- Dòng 1 chứa các số nguyên dương nhỏ hơn hoặc bằng n và là số chẵn, theo thứ tự tăng dần
- Dòng 2 chứa các số nguyên dương nhỏ hơn hoặc bằng n và là số lẻ, theo thứ tự giảm dần
- Dòng 3 chứa chuỗi “Done”

INPUT
- Một số nguyên n ≥ 0

OUTPUT
- 3 dòng như ví dụ
*/