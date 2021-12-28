#include <iostream>

using namespace std;
int main() {
    int n, sum;
    cin >> n;
    sum = 1;
    for (int i = 2; i <= (n / 2) ; i++){
        if (n % i == 0)
            sum += i;
    }
    cout << sum;
    return 0;
}
/*
Viết chương trình tính tổng các ước số của một số nguyên dương.

INPUT

Số nguyên dương n giá trị không qúa 1 tỷ.

OUTPUT

Tổng các ước số của n (không kể n)
*/