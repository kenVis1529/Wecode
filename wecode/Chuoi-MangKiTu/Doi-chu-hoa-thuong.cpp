#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[200];
    cin.getline(s1,200);
    for (int i = 0;i < strlen(s1);i++){
        if (s1[i] >= 'a' && s1[i] <= 'z') 
            s1[i] = toupper(s1[i]);
        else s1[i] = tolower(s1[i]);
    }
    cout<<s1;

    return 0;
}
