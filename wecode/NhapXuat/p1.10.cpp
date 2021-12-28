/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
for
while
do
if
else
switch
case
define
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
using namespace std;

int main()
{
    int n, rs;
    cin >> n;
    
    rs = (n % 2 == 0) ? (0) : (1);
    cout << rs;
    return 0;
}