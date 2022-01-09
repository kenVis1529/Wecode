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

//###INSERT CODE HERE -
void replaceChar(char s1[], char s2[], char c){
    int b[100]{0};
    for (int i = 0; i < strlen(s2); i++)
        if (b[i] == 0)
            b[i] = 1;
        else{    
            for (int j = i; j < strlen(s2) - 1; j++)
                s2[j] =s2[j + 1];   
            s2[strlen(s2)-1] = '\0';     
        }
    for (int i = 0; i < strlen(s1); i++)
        for (int j = 0; j < strlen(s2); j++)
            if (s1[i] == s2[j]) s1[i] = c;
}
//END CODE

int main()
{

   char s1[100],s2[100];
   cin.getline(s1,100);
   cin.getline(s2,100);
   // Thay nhung ky tu trong s1 ma co chua trong s2 thanh '*'
   replaceChar(s1, s2, '*');
   cout<<s1;

   return 0;
}
