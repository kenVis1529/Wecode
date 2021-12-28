/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
for
while
goto
[
]
\*
/
%
###End banned keyword*/
#include <iostream>
using namespace std;
int modulo(int m, int n){
//###INSERT CODE HERE -
    //n = 0 or m = 0 -> return 0
    //n = 1 or m < n -> return m
    //return modulo(m - n, n);
    if((n == 0) || (m == 0)) return 0;
    if ((n == 1) || (m < n)) return m;
    return modulo(m - n, n);
//END CODE
}


int main (){
    int m, n; cin >> m >> n;
	cout << modulo(m, n);
}