#include <iostream>

using namespace std;
int main() {
    int n, i;

    cin >> n;
    if (n % 2 == 0)
        cout << 0;
    else
        switch (n){
            case 1: 
            {
                cout << -1;
                break;
            }
            default:
            {
                for (i = 3; i <= (n / 2) + 1; i += 2) {
                    if (n % i == 0) {
                        cout << 0;
                        return 0;
                    };
                };
                cout << 1;
            };
        };

    return 0;
}
/*
Viết chương trình tính Kiểm tra một số có phải là số nguyên tố hay không.

Số nguyên tố là số tự nhiên chỉ có hai ước số dương phân biệt là 1 và chính nó, 
nghĩa là chỉ chia hết cho 1 và chính nó. Các số có nhiều hơn 2 ước số dương được gọi là hợp số.

Do số 1 chỉ có một (1) ước số dương là chính nó, nên số 1 không phải là số nguyên tố và cũng không phải là hợp số.


INPUT
- Một số nguyên dương n ≥ 1


OUTPUT
- Trả về 0 nếu n là hợp số, tức không phải là số nguyên tố

- Trả về 1 nếu n là số nguyên tố

- Trả về -1 nếu không phải là số nguyên tố cũng không phải là hợp số
*/