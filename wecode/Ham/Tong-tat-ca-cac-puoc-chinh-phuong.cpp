/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

//###INSERT CODE HERE -
#include <math.h>
int sum_all_square(int n)
{
    int i = 4, sum = 1, t = pow(sqrt(i)+1, 2) - i;
    for (; i <= n; i += t)
    {
        if (n % i ==0)
            sum += i;
        t = pow(sqrt(i)+1, 2) - i;
    }
    return sum;
}
// END CODE

int main() {
    int n;
    cin>>n;
    cout << sum_all_square(n);
}
