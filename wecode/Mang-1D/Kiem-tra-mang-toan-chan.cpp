
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int n, a[100];

    //###INSERT CODE HERE -
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] % 2 != 0){
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    //END CODE
    return 0;
}
