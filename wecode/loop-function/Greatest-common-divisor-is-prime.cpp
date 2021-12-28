
#include <iostream>
using namespace std;

int ucln (int a, int b){
    while (a != b){
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}
bool prime(int n){
    if (n == 1) return false;
    for (int j = 3; j <= (n / 2); j += 2){
        if (n % j == 0) return false;
    }
    return true;
}
int main (){
    int n, i;
    cin >> n;
    i = n;
    while (true){
        i++;
        if (prime(ucln(n, i))) 
        {
            cout << i;
            break;
        }
    }
	return 0;
}
