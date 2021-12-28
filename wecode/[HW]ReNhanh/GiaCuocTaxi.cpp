#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int c, milestone1, milestone2;
    float s, t, f, total;
    cin >> s >> c >> t;
    milestone1 = 2;
    milestone2 = 30;
    total = 0;

    //Không hợp lệ
    if ((s < 0) || ((c != 1) && (c != 0)) || (t < 0))
        cout <<  "Gia tri khong hop le";
    else if ((s == 0) && (c != 0)){
        cout << "Gia tri khong hop le";
    } 
    else{
        // TỔNG LƯỢT ĐI
        f = s;
        if ((s != 0))
        {
            total += 10000;
            --f;
            if ((s >= milestone1) && (s <= milestone2))
            {
                total += f * 13600;
            }
            else {
                f -= milestone2;
                total += (milestone2 - milestone1) * 13600 + f * 11000;
            };
        };

        // + TỔNG LƯỢT VỀ
        if (c == 1) { 
            total += total * (60 / 100.0); 
            // + TỔNG PHÍ ĐỢI
            total += ((t - 2) > 0) ? ((t - 2) * 20000) : (0);
        };
        cout << trunc(total);
    };

    return 0;
}