#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    float a, b, c, del, x1, x2;
    cin >> a >> b >> c;

    del = b * b - 4 * a * c;
    if (del < 0) //Vô nghiệm
        cout << "PTVN";

    else if (del == 0) //Nghiệm kép
    {
        cout << "PT co nghiem kep: x1 = x2 = ";
        if (b == 0)
            cout << 0;
        else
            cout << -b / (2 * a); 
    }      
    else//2 nghiệm phân biệt
    {
        cout << "PT co hai nghiem phan biet:" << endl;
        x1 = (-b + sqrt(del)) / (2 * a);
        x2 = (-b - sqrt(del)) / (2 * a);
        x1 = (abs(x1) < 0.001) ? 0 : x1;
        x2 = (abs(x2) < 0.001) ? 0 : x2;
        cout << "x1 = "<< x1 << endl; 
        cout << "x2 = "<< x2;
    };
       
    return 0;
}