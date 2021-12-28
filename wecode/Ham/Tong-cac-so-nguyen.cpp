/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
?
else
[
###End banned keyword*/

#include <iostream>

using namespace std;


int sumMany(int m);
int main()
{
    int n;
    cin>>n; //So luong cac so nguyen can nhap

//###INSERT CODE HERE -
    cout << sumMany(n);
    return 0;
}
int sumMany(int m) //  m là tham số hình thức
{
    int x, rs = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        rs += x;
    }
    return rs;
}
// END CODE

