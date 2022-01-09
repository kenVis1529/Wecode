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
void properNounCorrection(char str[]){
    str[0] = toupper(str[0]);
    for (int i = 1; i < strlen(str); i++)
        if (tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
            if (str[i-1] == ' ')
                str[i] = toupper(str[i]);
            else str[i] = tolower(str[i]);
}
//END CODE

int main()
{

   char str[100], str1[100];
   cin.getline(str,100);
   cout<<"Chuoi ban dau: "<<str;
   cout<<"\nChuoi sau khi chuan hoa: ";
   properNounCorrection(str);
   cout<<str;

   return 0;
}
