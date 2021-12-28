#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, left, right, half, count = 0;
    cin >> n >> left >> right; 

    //Duyệt i từ left đến right, 
    //bắt đầu tính các số khi 
    //n - i <= right

    //Ít nhất 1 trong 2 số phải >= n / 2
    half = ceil(n / 2.0);
    if (right < half)
        cout << 0;
    else if ((right - half) > (half - left)){
        for (int i = left; i < half; i++)
        {
            int t = n - i;
            if ((t >= left) && (t <= right))
                ++count;
        };
    } else {
        for (int i = half; i <= right; i++)
        {
            int t = n - i;
            if ((t >= left) && (t <= right))
                ++count;
        };
    };
    cout << count;



    return 0;
}