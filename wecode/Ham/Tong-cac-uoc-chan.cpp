/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

//###INSERT CODE HERE -
int Input()
{
    int x;
    cin >> x;
    return x;
}
int sum_even_divisor(int n)
{
    int sum = 0;
    if (n % 2 == 0)
    {
        for (int i = 2; i <= n; i += 2)
            if (n % i == 0)
                sum += i;
    }
    else   
        return -1;
    return sum;
}
// ENG CODE
int main() {
	int n;
	n=Input();
	cout << sum_even_divisor(n);
}
