/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
string
###End banned keyword*/

#include <iostream>
#include <cstring>
using namespace std;

//###INSERT CODE HERE -
void properNounCorrection(char s[]){
    s[0] = toupper(s[0]);
    for (int i = 1; i < strlen(s); i++)
        s[i] = tolower(s[i]);
}
// END CODE
int main ()
{
    char s[100];
    cin.getline(s, 35);
    properNounCorrection(s);
    cout<< s;
    return 0;
}
