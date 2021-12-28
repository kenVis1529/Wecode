/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
Fibo
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;

//###INSERT CODE HERE -
void input(int &x){
    cin >> x;
     while ((x <= 0) || (x > 50)){
        cout << "Gia tri vua nhap la " << x << ", khong hop le. Vui long nhap lai.\n";
        cin >> x;
    };
}
void sum(int n){
    int k = 1, s = 2, f = 0, i = 3;

    while (k < n)
    {
        for (int j = 3; j <= (i / 2); j += 2)
        {
            if (i % j == 0){
                f = 1;
                break;
            };
        };
        if (f != 1)
        {
            s += i;
            ++k;
        };
        f = 0;
        i += 2;
    };
    cout << "Tong " << n << " so nguyen to dau tien la: " << s;
}
int main(){
    int n;
    input(n);
    sum(n);
    return 0;
}
// END CODE