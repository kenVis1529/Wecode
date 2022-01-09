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
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	fgets(s,MAX,stdin);
	fgets(s1,MAX,stdin);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{

//###INSERT CODE HERE -
        ChenChuoiTaiVitriK(s, s1, k);
        cout << s;
    }
}
int myStrlen(char s[], int k){
    int i = k, len = 0;
    for (;s[i] != '\0' && s[i] != '\n'; i++){
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
void ChenChuoiTaiVitriK(char s[], char s1[], int k){
    int i;
    int lens1 = myStrlen(s1, 0);
    char t[MAX];

    myStrcpy(t, 0 , s, 0);
    myStrcpy(s, k+1, t, k);
    s[k] = ' ';
    for (i = lens1 - 1; i >= 0; i--){
        myStrcpy(t, 0 , s, 0);
        myStrcpy(s, k+1, t, k);
        s[k] = s1[i];
    }
}
//1. Chèn vào chỗ ' '
//2. Chèn vào giữa chữ