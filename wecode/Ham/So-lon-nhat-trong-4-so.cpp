/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
?
else
[
###End banned keyword*/

#include <iostream>

using namespace std;

//GV goi y viet cac ham sau
int inputNumber();
int larger(int x, int y);
int compareFour(int x, int y, int z, int w);


//###INSERT CODE HERE -
int inputNumber()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "\nInvalid number, please try again: " ;
        cin >> n;
    }
    return n;
}
int larger(int x, int y)
{
    if (x > y)
        return x;
    return y;
}
int compareFour(int x, int y, int z, int w)
{
    int big1 = larger(x, y);
    int big2 = larger(z, w);
    if (big1 >= big2)
        return big1;
    return big2;
}
// END CODE

int main()
{

    int a, b, c, d;
    a=inputNumber();cout<<endl;
    b=inputNumber();cout<<endl;
    c=inputNumber();cout<<endl;
    d=inputNumber();cout<<endl;
    cout<< "Numbers entered: "<<a<<", "<<b<<", "<<c<<", "<<d<<endl;
    cout <<"The largest number is "<<compareFour(a, b, c, d);
    return 0;
}
