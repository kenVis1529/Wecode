#include <iostream>
#include <math.h>

using namespace std;
int main() {
    float c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    //Không phải tam giác
    if ( ((c1 + c2) <= c3) || ((c1 + c3) <= c2) || ((c2 + c3) <= c1) )
        cout << "KHONG"; 
    else
    {
    //Tam giác đều
        if ((c1 == c2) && (c2 == c3) && (c1 == c3))
            cout << "DEU";
    //Tam giác cân
        else if ((c1 == c2) || (c2 == c3) || (c1 == c3))
            cout << "CAN";
    //Tam giac vuông
        else if ( 
            (( c1 * c1 + c2 * c2 ) == ( c3 * c3 )) ||
            (( c2 * c2 + c3 * c3 ) == ( c1 * c1 )) ||
            (( c1 * c1 + c3 * c3 ) == ( c2 * c2 )) 
            )
                cout << "VUONG";
    //Tam giác nhọn
        else 
            cout << "NHON";
    }
    return 0;
}