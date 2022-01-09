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
#include <string>
#include <stdio.h>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	 
         fgets(s1,MAX,stdin);
	 fgets(s2,MAX,stdin);
	bool kt = myStrcat(s1, s2);

//###INSERT CODE HERE -
    if (kt == false){
        cout << "Khong noi duoc. Khong du bo nho.";
    } 
    else
    {
        for (int i = 0; s1[i] != '\0' && s1[i] != '\n'; i++){
            cout << s1[i];
        }
        for (int i = 0; s2[i] != '\0' && s2[i] != '\n'; i++){
            cout << s2[i];
        }
    }
}
int myStrlen(char s[]){
    int i;
    for (i = 0;s[i] != '\0' && s[i] != '\n'; i++);
    return i;
}
bool myStrcat(char s1[], char s2[]){
    int lens1 = myStrlen(s1), lens2 = myStrlen(s2);
    if (lens1 + lens2 > 254) return false;
    return true;
}