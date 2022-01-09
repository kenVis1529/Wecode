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

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s	
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

//###INSERT CODE HERE -
void DemKyTu(char s[]){
	int lens = myStrlen(s, 0);
    int count[MAX]{0}, check = 0;;
    count [0] = 1;
	for (int i = 1; i < lens; i++){
		for (int j = 0; j < i; j++){
            /*
            Nếu kí tự còn mới (check = 0), thì ++count
            Nếu kí tự đã có trước đó (check = 1), thì để count = 0 và trả lại check = 0
            */
            if (s[j] == s[i]){
                count[j]++;
                check = 1;
                break;
            }
        }
        if (check == 0) ++count[i];
        check = 0;
	}
	for (int i = 0; i < lens; i++){
		if (count[i] != 0) 
			cout << s[i] << ": " << count[i] << endl;
	}
}
int myStrcmp(char s1[MAX], char s2[MAX]){
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