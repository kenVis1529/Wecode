#include <iostream>

using namespace std;
int main(){
    int n, order;
    cin >> n;

    if (n < 0)
        order = (abs(n) - 10) % 12;
    else if (n > 3)
        order = (n - 3) % 12;
    else 
        order = (n + 1) % 12;
    switch (order)
    {
    case 1:
        cout << "TY'";
        break;
    case 2:
        cout << "SUU";
        break;
    case 3:
        cout << "DAN";
        break;
    case 4:
        cout << "MEO";
        break;
    case 5:
        cout << "THIN";
        break;
    case 6:
        cout << "TY.";
        break;
    case 7:
        cout << "NGO";
        break;
    case 8:
        cout << "MUI";
        break;
    case 9:
        cout << "THAN";
        break;
    case 10:
        cout << "DAU";
        break;
    case 11:
        cout << "TUAT";
        break;
    case 12:
        cout << "HOI";
        break;
    default:
        break;
    }
    return 0;
}