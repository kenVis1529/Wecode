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

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];

	fflush(stdin);
	fgets(s,MAX,stdin);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}

//###INSERT CODE HERE -
void ChenChuoiTaiVitriK(char s[], char s1[], int k){
    int i;
    int lens1 = myStrlen(s1, 0);
    for (i = 0; i < lens1; i++){
        char t[MAX];
        myStrcpy(t, 0 , s, 0);
        myStrcpy(s, k+1, t, k);
        s[k] = s1[i];
    }
}
void Chuanhoa(char s[]){
    //1. Tìm vt '.' (int myStrstr)
    //Sau '.' có ít hơn 1 ' '
        /*
        2. Chèn ' ' nếu vt + 1 không phải ' ' (void ChenChuoiTaiVitriK)
        3. Tiếp tục lại bước 1
        */
    //Sau '.' có nhiều hơn 1 ' '
        /*
        2. Tìm vt khác ' '
        3. Đẩy chuỗi từ (vt != ' ') đến (vt '.' + 2)
            a. copy từ (vt != ' ') đến (vt '.' + 2) (void myStrcpy)
        */
    int vt, i, j, lens = myStrlen(s, 0);
    //cout << "\n" << lens << "\n";
    char spaces[MAX]{' '}; spaces[1] = '\0';

    i = 0;
    while (i < lens){
        if (s[i] == '.')
        {
            //Xóa ' ' trước '.'
            while (s[i-1] == ' ') {
                // char t[MAX];
                // myStrcpy(t, 0 , s, 0);
                myStrcpy(s, i - 1, s, i);
                s[lens] = '\0';
                --lens;
                --i;
            }
            //Sau '.' có ít hơn 1 ' '
            if (s[i+1] != ' '){
                ChenChuoiTaiVitriK(s, spaces, i+1);
                ++lens;
            }
            //Sau '.' có nhiều hơn 1 ' '
            if (s[i+1] == ' ' && s[i+2] == ' '){
                for (j = i+2; j < lens; j++)
                    if (s[j] != ' '){
                        break;
                    }
                //Đẩy từ vt kí tự khác ' ' -> vt ' ' + 2;
                myStrcpy(s, i + 2, s, j);
            }
        }
        ++i;
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
    //cout << lens1 << " " << s << endl;
}
int myStrstr(char s[], char s1[]){
    int lens = myStrlen(s, 0), lens1 = myStrlen(s1, 0);
    for (int i = 0; i < lens; i++){
        if (s[i] == s1[0]) {
            int k = i + 1, check = 1;
            for (int j = 1; j < lens1; j++){
                if (s[k] != s1[j]) {
                    check = 0;
                    break;   
                } 
                ++k;
            }
            if (check == 1) return i;
        }
    }
    return -1;
}