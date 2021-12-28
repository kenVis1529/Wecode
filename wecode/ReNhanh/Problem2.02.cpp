/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
switch
###End banned keyword*/

#include <iostream>
using namespace std;


int main()
{
    int temperature;
    cout<<"What is the outdoor temperature? ";
    cin>>temperature;
    cout<<endl;

//###INSERT CODE HERE -
    cout << "What is your plan today?" << endl;
    if (temperature >= 33)
        cout << "Good day for swimming";
    else if (temperature >= 24)
        cout << "Good day for golfing";
    else if (temperature >= 10)
        cout << "Good day to play tennis";
    else
        cout << "Go to bed";
//END
    return 0;
}


