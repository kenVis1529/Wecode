/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
?
if
else
[
###End banned keyword*/


#include <iostream>
using namespace std;

char courseGrade(int score)
{
    switch(

//###INSERT CODE HERE -
    score >= 90){
        case true:
            return 'A';
    }
    switch(score >= 80){
        case true:
            return 'B';
    }
    switch(score >= 70){
        case true:
            return 'C';
    }
    switch(score >= 60){
        case true:
            return 'D';
    }
    return 'F';
}
int main()
{
    int n;
    cin >> n;
    cout << courseGrade(n);
    return 0;
}
// END CODE

