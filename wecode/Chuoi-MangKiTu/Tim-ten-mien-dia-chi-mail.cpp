/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
class
new
###End banned keyword*/

#include <iostream>
#include <string>
using namespace std;

//###INSERT CODE HERE -
string findEmailDomain(string address){
    string rs = "";
    for (int i = address.length() - 1; i >= 0; i--){
        if (address[i] == '@')
            break;
        rs = address[i] + rs;
    }
    return rs;
}
//END CODE
int main ()
{
    string address;
    getline(cin,address);
    cout<< findEmailDomain(address);
    return 0;
}
