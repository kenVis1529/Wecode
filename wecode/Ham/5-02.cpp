/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
class
goto
static
math
cmath
sin
###End banned keyword*/
#include <iostream>
#include <iomanip>
using namespace std;

//###INSERT CODE HERE -
double ps(double x, int k){
    double m = 1, j;
    for (j = 1; j <= k; j++)
        m *= x / j;
    return m;
}

double sx(double x){
    double rs = 0;
    int n = 101, k;
    for (int i = 0; i <= n; i++){
        k = 2 * i + 1; //Odd
        int t = (i % 2 == 0) ? (1) : (-1);
        rs += (t * ps(x, k));
    }
    return rs;
}
int main (){
    double x;
    cin >> x;
    cout << setprecision(4) << sx(x);
    return 0;
}
// END CODE