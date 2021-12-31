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

//###INSERT CODE HERE
void encloseInBrackets(char a[]){
    char f[40] = {'('};
    char g[40] = {')'};
    strcat(f, a);
    strcat(f, g);
    strcpy(a, f);
    
}
//END CODE
int main ()
{
    char a[100];
    cin.getline(a,40);
    encloseInBrackets(a);
    cout<<a;
    return 0;
}
