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

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

//###INSERT CODE HERE -
void DemTieng(char s1[]){
    int lens1 = myStrlen(s1,0);
    int vt[MAX]{-1}, e[MAX]{0}, wcount[MAX]{0};
    char ss[MAX]{'\0'};
    int i, k = 0, index, ii, jj, check, ws, nword;
    //Đánh số thứ tự các tiếng
    for (i = 0; i < lens1; i++){
        if (s1[i] != ' '){
            vt[k] = i;
            for (int j = i; j < lens1; j++){
                if (s1[j] == ' ') break;
                ++e[k];
            }
            ++k;
            break;
        }
    }
    while (i < lens1){
        if (s1[i] != ' '){
            if (s1[i-1] == ' '){
                vt[k] = i; //Vị trí của kí tự đầu mỗi tiếng
                for (int j = i; j < lens1; j++){
                    if (s1[j] == ' ') break;
                    ++e[k];
                }
                ++k; 
            }
        }
        ++i;
    }

    // trung    kien  thuc ta (s1)
    // 0 9 15 20 (vt)
    // 5 4 4 2(e)
    wcount[vt[0]] = 1;
    for (int i = 1; i < k; i++){
        nword = 1;
        for (int j = 0; j < i; j++){
            check = 1;
            ii = vt[i], jj = vt[j];
            while (s1[ii] != ' ' && s1[jj] != ' '){
                if (s1[ii] != s1[jj]){
                    check = 0;
                    break;
                }
                ++ii;
                ++jj;
            }
            if (check == 1) {
                nword = 0;
                wcount[vt[j]]++;
                break;
            } 
            // else contienue to check the next words
        }
        if (nword == 1) wcount[vt[i]]++;
    }
    // for (int i = 0; i < k; i++)
    //     cout << vt[i] << " ";
    // cout << endl;
    // for (int i = 0; i < k; i++)
    //     cout << e[i] << " ";
    // cout << endl;
    for (int i = 0; i < k; i++){
        ws = wcount[vt[i]];
        if (ws != 0){
            mySubstr(s1, vt[i], e[i], ss);
            cout << ss << ": " << ws << endl;
        }
    }
}
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
void myMemmove(char s[], int vt, int k){
    int lens = myStrlen(s, 0);
    while (k > 0){
        for (int j = vt; j < lens - 1; j++)
            s[j] = s[j+1];
        --k;
        s[lens] = '\0';
        lens--;
    }
}
void mySubstr(char s[], int b, int count, char ss[]){
    int j = 0;
    for (int i = b; i - b < count; i++){
        ss[j++] = s[i];
    }
    ss[j] = '\0';
}
// int myStrstr(char s[], char s1[]){

// }
// bool myStrcat(char s1[], char s2[]){
    
// }