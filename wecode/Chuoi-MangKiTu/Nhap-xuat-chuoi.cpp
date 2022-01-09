/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

//###INSERT CODE HERE -
int main(){
    char s[MAX]{'\0'};
    int n = 0, check = 1;
    cin.getline(s, MAX);
    while (s[n] != '\0'){
        if (s[n] >= '0' && s[n] <= '9'){
            cout << "CHUOI KHONG HOP LE.";
            return 0;
        }
        ++n;
    }
    for (int i = 0; i < n; i++){
        cout << s[i];
    }
    return 0;
}