
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>

using namespace std;

//###INSERT CODE HERE -
int burnCandles(int candles,int makeNew){
    // Phan thua 1 = candles
    // Phan thua 2 = Phan thua 1 / makeNew + Phan thua 1 % makeNew
    // Phan thua 3 = ...
    int burned = candles, s = candles;
    while (burned >= makeNew){
        s += burned / makeNew;
        burned = (burned / makeNew) + (burned % makeNew);
    }
    return s;
}
//END CODE
int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);


    int candles, makeNew;
    cin>>candles>>makeNew;

    cout <<burnCandles(candles,makeNew)<< endl;
    return 0;
}
