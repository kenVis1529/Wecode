#include <iostream>
#include <math.h>

using namespace std;
int main() {
    float c1, c2, c3, s, p;
    cin >> c1 >> c2 >> c3;

    //Không phải tam giác
    if ( ((c1 + c2) <= c3) || ((c1 + c3) <= c2) || ((c2 + c3) <= c1) )
        cout << "Khong phai tam giac"; 
    else
    {
    //Nửa chu vi
        p = ( c1 + c2 + c3 ) / 2;
    //Diện tích
        s = sqrt(p * ( p - c1 ) * ( p - c2 ) * ( p - c3 ));
    //Tam giác đều
        if ((c1 == c2) && (c2 == c3) && (c1 == c3))
            cout << "Tam giac deu, ";
        else if ((c1 == c2) || (c2 == c3) || (c1 == c3))
            cout << "Tam giac can, ";
        else if ( 
            (( c1 * c1 + c2 * c2 ) == ( c3 * c3 )) ||
            (( c2 * c2 + c3 * c3 ) == ( c1 * c1 )) ||
            (( c1 * c1 + c3 * c3 ) == ( c2 * c2 )) 
            )
                cout << "Tam giac vuong, ";
        else 
            cout << "Tam giac thuong, ";
        cout << fixed;
        cout.precision(2);
        cout << "dien tich = " << s;
    }
    return 0;
}