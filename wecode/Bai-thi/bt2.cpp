/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;

#define MAX 500

void Nhapmang(int a[], int &n);
void Xuatmang(int a[], int n);
long long TichSole_VTSNT(int a[], int n);


int main()
{
    int a[MAX], n;
    Nhapmang(a,n);

//###INSERT CODE HERE -
    Xuatmang(a, n);
    return 0;
}
void Nhapmang(int a[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void Xuatmang(int a[], int n){
    if (n <= 0) cout << "Mang rong.";
    else {
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        long long rs = TichSole_VTSNT(a, n);
        if (rs == 1) cout << "\nKhong tim duoc so le o vi tri la so nguyen to, tich la: " << 0;
        else cout << "\nTich cac so le o vi tri la so nguyen to la: " << rs;
    }
}
long long TichSole_VTSNT(int a[], int n){
    long long product = 1;
    int check = 0;
    if ((n >= 3) && (a[2] % 2 != 0)) product *= a[2];
    for (int i = 3; i < n; i += 2){
        if (a[i] % 2 != 0){
            check = 0;
            for (int j = 3; j < i / 2; j += 2){
                if (i % j == 0) check = 1;
            }
            if (check == 0) product *= a[i];
        }
    }
    return product;
}