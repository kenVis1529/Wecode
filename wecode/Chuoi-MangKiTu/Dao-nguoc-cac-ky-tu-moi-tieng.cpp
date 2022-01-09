/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

//###INSERT CODE HERE -
int myStrcmp(char s1[], char s2[]){
    int lens1 = myStrlen(s1, 0), lens2 = myStrlen(s2, 0), k = 0;
    if (lens1 != lens2) return -1;
    for (int i = 0; i < lens1; i++){
        if (s1[k] != s2[i]) {
            return -1;
        } 
        ++k;
    }
    return 0;
}
int myStrlen(char s[], int k){
    int len = 0;
    while (s[k] != '\0' && s[k] != '\n'){
        ++k;
        ++len;
    }
    return len;
}
void myStrcpy(char s[], int vt, char s1[], int k){
    int lens1 = myStrlen(s1, 0);
    for (int i = k; i < lens1; i++){
        s[vt] = s1[i];
        ++vt;
    }
    s[vt] = '\0';
}
void mySubstr(char s[], int b, int count, char ss[]){
    int j = 0;
    for (int i = b; i - b < count; i++){
        ss[j++] = s[i];
    }
    ss[j] = '\0';
}
// bool myStrcat(char s1[], char s2[]){
    
// }
void StringReverse(char st[]){
    int lenst = myStrlen(st, 0);
    int i = 0, j, d = 0, c = 0;
    char t[1];
    while (i < lenst){
        if (st[i] != ' '){
            d = i;
            for (j = i + 1; j <= lenst; j++)
                if ((st[j] == ' ') || (j == lenst)){
                    c = j - 1;
                    i = j - 1;
                    break;    
                }
            while (d < c){
                t[0] = st[c];
                st[c] = st[d];
                st[d] = t[0];
                --c;
                ++d;
            }
        }
        ++i;
    }
}