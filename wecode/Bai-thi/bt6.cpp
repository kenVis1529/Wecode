
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>

using namespace std;

//###INSERT CODE HERE -
int DemSoKyTuNguyenAm(char *s)
{
    int dem = 0;
    char oam[5] = {'a','e','o','i','u'};
    for (int i = 0; i < strlen(s); i++){
        for (int j = 0; j < 5; j++){
            if (tolower(s[i]) == oam[j]) ++dem;
        }
    }
    return dem;
}
// END CODE
int main()
{
    char s[256];
    cin.getline(s,256);
    cout<<DemSoKyTuNguyenAm(s);
    return 0;
}
