#include <iostream>
#include <cstring>
#define max 100
using namespace std;
void removeSpace(char name[max], char rname[max], int &index){
    //Remove '_' between each words
    for (int i = 0; i < strlen(name); i++){
        if (name[i] == '_' && name[i+1] == '_')
            continue;
        else{    
            rname[index] = name[i];
            ++index;
        }
    }
}
int main ()
{
    char name[max], rname[max];
    int index = 0, i;
    cin.getline(name, max);
    removeSpace(name, rname, index);
    for (i = 1; i < (index - 1); i++)
        cout << rname[i];
    return 0;
}
