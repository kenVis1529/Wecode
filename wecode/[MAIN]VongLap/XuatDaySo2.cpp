#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    //- Dòng 1 chứa các số 1 2 3 ...nhỏ hơn hoặc bằng n
    for (int i = 1; i <= n; i++ )
    {
        cout << i << " ";
    };
    cout << endl;
    //- Dòng 2 chứa các số 10 15 20 ...nhỏ hơn hoặc bằng n
    for (int i = 10; i <= n; i += 5 )
    {
        cout << i << " ";
    };
    cout << endl;
    //- Dòng 3 chứa các số 20 30 40 ...nhỏ hơn hoặc bằng n
    for (int i = 20; i <= n; i += 10 )
    {
        cout << i << " ";
    };
    return 0;
}

/*Viết chương trình Xuất 3 dãy số theo yêu cầu sau:
- Dòng 1 chứa các số 1 2 3 ...nhỏ hơn hoặc bằng n
- Dòng 2 chứa các số 10 15 20 ...nhỏ hơn hoặc bằng n
- Dòng 3 chứa các số 20 30 40 ...nhỏ hơn hoặc bằng n

INPUT
- Một số nguyên n ≥ 0

 
OUTPUT
- 3 dòng như ví dụ*/