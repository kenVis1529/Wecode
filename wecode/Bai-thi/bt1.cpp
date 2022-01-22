/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/


#include <iostream>
using namespace std;


int main()
{
    int a[10000],n,i;
    cin>>n;
//###INSERT CODE HERE -
    int min = 999999, vt;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= min) {
            min = a[i];
            vt = i;
        };
    }
    cout << min << endl << vt;
//END CODE
    return 0;
}