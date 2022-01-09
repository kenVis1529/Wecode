
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[200], s2[200];
    cout<<"Nhap chuoi = ";

//###INSERT CODE HERE -
    cin.getline(s1,200);
    int index = 0, i;
    for (i = 0; i < strlen(s1); i++){
        if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z'))
            break;
        s2[i] = s1[i];
    }
    while (i < strlen(s1)){
        if (index % 2 == 0) s2[i] = toupper(s1[i]);
        else s2[i] = tolower(s1[i]);
        ++i;
        ++index;
    }
//END CODE
    cout<<"\ns1="<<s1<<endl;
    cout<<"s2="<<s2;

    return 0;
}
