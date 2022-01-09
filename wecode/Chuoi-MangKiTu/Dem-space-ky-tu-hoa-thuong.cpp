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
int countBlankSpace(char str[]){
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == ' ')
            ++count;
    return count;
}
void countUpperLower(char str[]){
    int count1 = 0, count2 = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            ++count1;
        else if (str[i] >= 'a' && str[i] <= 'z')
            ++count2;
    cout << "\nSo ky tu hoa: " << count1;
    cout << "\nSo ky tu thuong: " << count2;
}
//END CODE
int main()
{

   char str[100], str1[100];
   cin.getline(str,100);
   cout<<"Chuoi: "<<str;
   cout<<"\nSo ky tu khoang trang: "<<countBlankSpace(str);
   countUpperLower(str);



   return 0;
}
/*


*/
