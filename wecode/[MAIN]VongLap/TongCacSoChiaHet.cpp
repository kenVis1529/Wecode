#include <iostream>

using namespace std;
int main() {
    int n, a, b, s = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++ )
    {
        if (((i % a == 0) && (i % b != 0))) 
            s += i;
    };
    cout << s;
    return 0;
}
/*Viết chương trình Tính tổng các số nguyên dương nhỏ hơn hoặc bằng n, chia hết cho a mà không chia hết cho b

INPUT
- 3 số nguyên dương n, a, b có giá trị nhỏ hơn 1000

OUTPUT
- 1 số nguyên dương là tổng cần tìm
*/