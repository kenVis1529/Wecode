/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
for
while
goto
static
###End banned keyword*/
#include <iostream>
using namespace std;

int largest_input(){
//###INSERT CODE HERE -

    int max = 0, x, n;
    cin >> x;
    if (x != 0) 
        n = largest_input();
        if (x > n) return x;
    else return n;

// END CODE
}
int main(){
	cout << largest_input();
}
