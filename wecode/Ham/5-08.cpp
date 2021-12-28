/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
for
do
while
goto
###End banned keyword*/

#include <iostream>


//###INSERT CODE HERE -
#include <string>
#include <algorithm>
using namespace std;
int reverse(int n){
    string m = to_string(n);
    reverse(m.begin(), m.end());
    return stoi(m);
}

//END CODE
int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
