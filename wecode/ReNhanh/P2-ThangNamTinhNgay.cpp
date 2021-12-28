#include <iostream>

using namespace std;
int main() {
    int m, y;
    cin >> m >> y;
    if (( m < 1 ) || ( m > 12) || ( y <= 1975 )){
        cout << "Khong hop le.";
    }
    else {
        if (y % 4 == 0){
            switch (m){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                {
                    cout << 31;
                    break;
                }
                case 4:
                case 6:
                case 9:
                case 11:
                {
                    cout << 30;
                    break;
                }
                case 2:
                {
                    cout << 29;
                }
            }
        } else {
            switch (m){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                {
                    cout << 31;
                    break;
                }
                case 4:
                case 6:
                case 9:
                case 11:
                {
                    cout << 30;
                    break;
                }
                case 2:
                {
                    cout << 28;
                }
            }
        };
    };
    return 0;
}