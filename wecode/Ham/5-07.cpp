/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
for
while
###End banned keyword*/

#include <iostream>
#include <iomanip>
using namespace std;

//###INSERT CODE HERE -
#include <math.h>
double calculate(int n){
    if (n == 1) return 1;
    return sqrt(n+calculate(n-1));
}
//END CODE
int main() {
	int n;
	cin >> n;
    cout <<fixed<<setprecision(2)<< calculate(n);
    return 0;
}
