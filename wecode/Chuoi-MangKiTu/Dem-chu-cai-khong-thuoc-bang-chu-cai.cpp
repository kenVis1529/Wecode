
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include<iostream>
#include<cstring>
using namespace std;

//###INSERT CODE HERE -
int countLetters(char s[]){
    int count = 0;
    const char letters[4] = {'f', 'j', 'z', 'w'};
    for (int i = 0; i < strlen(s); i++){
        for (int j = 0; j < 4; j++)
            if (tolower(s[i]) == letters[j])
                ++count;
    }
    return count;
}
//END CODE
int main()
{

   char s[256];
   cin.getline(s, 256);

   cout << countLetters(s) << endl;
    return 0;
}
