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
    int lenst = myStrlen(st, 0), i, j, d, c, words, index;
    int vt[MAX]{-1};
    char t, s1[MAX]{'\0'};
    st[lenst] = '\0';

    words = 0;
    for (i = 0; i < lenst; i++){
        if (st[i] != ' '){
            vt[words] = i;
            ++words;
            break;
        }
    }
    while (i < lenst){
        if (st[i] != ' '){
            if (st[i-1] == ' '){
                vt[words] = i; //Vị trí của kí tự đầu mỗi tiếng
                ++words; 
            }
        }
        ++i;
    } 

    //ta thuc trung kien -> kien trung thuc ta
    index = 0;
    myStrcpy(s1, 0 , st, 0);
    for (i = words - 1; i >= 0; i--){
        for (j = vt[i]; s1[j] != ' ' && j < lenst; j++){
            st[index] = s1[j];
            ++index;
        }
        st[index] = ' ';
        ++index;
    }
    st[index - 1] = '\0';
    // cout << endl;
    // st[50] = '\0';
    // for (int i = 0; i < 50; i++)
    //     cout << st[i];
    // cout << endl;
}