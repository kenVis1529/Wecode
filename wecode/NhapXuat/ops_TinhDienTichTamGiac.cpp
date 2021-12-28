/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
switch
:
return
&
###End banned keyword*/


//DIEN TICH TAM GIAC
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;

//###INSERT CODE HERE -
    cin >> a >> b >> c;
    float p = (a + b + c) / 2.0;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << round(s * 100) / 100;
//END
    return 0;
}

