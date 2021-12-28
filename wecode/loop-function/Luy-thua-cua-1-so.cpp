/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>
#include <math.h>

using namespace std;


//###INSERT CODE HERE -
bool isPower(int n){
    int i, j;
    if (n == 1) return true;
    for (i = 2; i <= sqrt(n); i++){
        j = 2;
        while (pow(i, j) < n){
            j++;
            if (pow(i, j) == n) return true;
        }
    }
    return false;
}
//END CODE
int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n;cin>>n;
    cout << isPower(n) << endl;
    return 0;
}


