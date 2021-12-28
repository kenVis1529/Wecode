/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
for
###End banned keyword*/
#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

//###INSERT CODE HERE -
    int x, y;
    cin >> x;
    y = x;
    x = (x < 0) ? (-x) : (x);
    if (x == 0)
        cout << 0;
    else
    {
        while (x > 0)
        {
            cout << x % 10 << endl;
            x /= 10;
        };
        if (y < 0) cout << "-";
    };
//END

    return 0;
}
