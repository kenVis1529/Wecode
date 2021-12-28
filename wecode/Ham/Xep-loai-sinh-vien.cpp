/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
?
switch
[
###End banned keyword*/


#include <iostream>
using namespace std;



//###INSERT CODE HERE -
void getScore(int score)
{
    cout << "Enter course score (0<=score<=100): ";
    cin >> score;
    cout << "\nCourse score is " << score;
}
void printGrade(int score)
{
    char xl;
    if (score >= 90)
        xl = 'A';
    else if (score >= 80)
        xl = 'B';
    else if (score >= 70)
        xl = 'C';
    else if (score >= 60)
        xl = 'D';
    else    
        xl = 'F';
    cout << "\nYour grade for the course is " << xl;
}
// END CODE
int main()
{
    int courseScore;
    getScore(courseScore);
    printGrade(courseScore);
    return 0;
}



