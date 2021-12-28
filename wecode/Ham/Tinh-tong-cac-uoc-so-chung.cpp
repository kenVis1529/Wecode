/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

//###INSERT CODE HERE -
void input(int &m)
{
    std::cin >> m;
}
int input()
{ 
    int x;
    std::cin >> x;
    return x;
}
int TongUocChung(int a, int b)
{
    int sum = 0;
    while (a != b){
        if (a > b) {a -= b;}
        else b -= a;
    }
    for (int i = 1; i <= a; i++){
         if ((a % i == 0) && (b % i == 0))
            sum += i;
    }
    return sum;
}
// END CODE
int main(){
    int a, b;
    a=input();
    input(b);
    std::cout << TongUocChung(a, b);
    return 0;
}
