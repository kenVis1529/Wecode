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

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt. 
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s	
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

//###INSERT CODE HERE -
int myStrlen(char s[], int k){
    int len = 0;
    while (s[k] != '\0' && s[k] != '\n'){
        ++k;
        ++len;
    }
    return len;
} //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k){
    int lens = myStrlen(s, 0);
    while (k > 0){
        for (int j = vt; j < lens - 1; j++)
            s[j] = s[j+1];
        --k;
    }
} //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt. 
int myStrstr(char s[], char s1[]){
    int lens = myStrlen(s, 0), lens1 = myStrlen(s1, 0);
    int i = 0, j = 1;
    while (i < lens){
        if (s[i] == s1[0]){
            int k = i + 1, check = 1;
            while (j < lens1){
                if (s[k] != s1[j]){
                    check = 0;
                    break;
                }
                ++j;
                ++k;
            }
            j = 1;
            if (check == 1) return i;
        }
        ++i;
    }
    return -1;
} //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]){
    int lens = myStrlen(s, 0);
    //Space in the beginning of the sentence
    while (s[0] == ' '){
        myMemmove(s, 0, 1);
        --lens;
    }
    //Space in the ending of the sentence
    while (s[lens-1] == ' '){
        myMemmove(s, lens - 1, 1);
        --lens;
    }
    //Capitalize first word
    s[0] = toupper(s[0]);
    //Remove redundant/unnecessary space between words
    char dspace[3]{' ', ' ', '\n'};
    int i = myStrstr(s, dspace); 
    while (i != -1){
        myMemmove(s, i, 1);
        s[lens-1] = '\0';
        --lens;
        i = myStrstr(s, dspace);
    }
    //Capitalize the remaining words and make the others letters lower.
    for (int i = 0; i < lens; i++){
        if (s[i] == ' '){
            s[i+1] = toupper(s[i+1]);
        }
        else
        {
            s[i+1] = tolower(s[i+1]);
        }
    }
}