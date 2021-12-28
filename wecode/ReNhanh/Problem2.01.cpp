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
    int age; cin>>age;
    char gender; cin>>gender;

//###INSERT CODE HERE -
    if (age >= 21)
        if (age > 100)
            cout << "I do not know why";
        else
            if ((gender == 'M') || (gender == 'm'))
                cout << 1;
            else if ((gender == 'F') || (gender == 'f'))
                cout << 2;
            else
                cout << "I do not know why";
    else if (age < 21)
        if (age < 0)
            cout << "I do not know why";
        else
            if ((gender == 'M') || (gender == 'm'))
                cout << 3;
            else if ((gender == 'F') || (gender == 'f'))
                cout << 4;
            else
                cout << "I do not know why";

//END
    return 0;
}


