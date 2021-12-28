/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
for
while
do
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;

//###INSERT CODE HERE -
    if ((x < 1) || (x > 30))
    {
        cout << "So " << x << " khong nam trong khoang [1,30].";
        return 0;
    };
    cout << Fibo(x);
    return 0;
}
int Fibo(int x) {
    if (x == 0) return 0;
    else if ((x == 1) || (x == 2)) return 1;
    return Fibo(x - 1) + Fibo(x - 2);
}
//END CODE