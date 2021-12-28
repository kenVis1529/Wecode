#include <iostream>

using namespace std;
int main() {
    float toan, ly, hoa, dtb;
    string xl;
    cin >> toan >> ly >> hoa;
    cout << fixed;
    cout.precision(2);
    dtb = (toan + ly + hoa) / 3;
    if (dtb >= 9)
        xl = "XUAT XAC";
    else if (dtb >= 8)
        xl = "GIOI";
    else if (dtb >= 7)
        xl = "KHA";
    else if (dtb >= 6)
        xl = "TB KHA";
    else if (dtb >= 5)
        xl = "TB";
    else if (dtb >= 4)
        xl = "YEU";
    else
        xl = "KEM";
    //OUTPUT
    cout << "DTB = " << dtb << endl;
    cout << "Loai: " << xl;
    return 0;
}