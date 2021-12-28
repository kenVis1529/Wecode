/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
for
do
while
###End banned keyword*/
#include <iostream>

//###INSERT CODE HERE -
using namespace std;
void input(int &n){
    cin >> n;
}
void sum(int n, int &s){
    if (n != 0) 
    {
        s += n % 10;
        n /= 10;
        sum(n, s);
    }
}
// END CODE
int main() {
    int n, s=0;
    input(n);
    sum(n, s);
    cout << s;
}
