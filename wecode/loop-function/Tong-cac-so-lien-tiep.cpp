/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>

using namespace std;


//###INSERT CODE HERE -
int isSumOfConsecutive(int n){
    int i, j, s, c = 0;
    for (i = 2; i <= (n / 2); i++){
        j = i;
        s = i;
        while (s < n){
            j++;
            s += j;
            if (s == n) {
                ++c;
                break;
            }
        }
    }
    return c;
}
//END CODE

int main()
{
    int n;cin>>n;
    cout <<isSumOfConsecutive(n)<< endl;
    return 0;
}


