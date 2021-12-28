/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
for
do
while
goto
###End banned keyword*/

#include <iostream>

//###INSERT CODE HERE -
using namespace std;
int gcd(int m, int n){
    if (m == n)
        return m;
    if (m > n) return gcd(m - n, n);
    return gcd(m, n - m);
}
// END CODE
int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n);
	return 0;
}
