/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
else
&
void
return
###End banned keyword*/
#include <iostream>
using namespace std;

int main()
{
	

	//###INSERT CODE HERE -
    double f, c, k;
    cin >> f;

    c = ( f - 32 ) * (5 / double(9));
    k = c + 273.15;
    cout << c << " " << k;
    //END CODE

    return 0;
}