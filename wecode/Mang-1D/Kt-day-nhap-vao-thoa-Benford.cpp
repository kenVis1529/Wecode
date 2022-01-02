/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 100

//###INSERT CODE HERE -
void Nhapmang(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int first_dit(int n){
    while (n > 9){
        n /= 10;
    }
    return n;
}
bool isBenford(int a[], int n){
    int c1 = 0, c4 = 0;
    for (int i = 0; i < n; i++){
        int d = first_dit(a[i]);
        if (d == 1) ++c1;
        else if (d == 4) ++c4;
    }
    return ((c1 == 3) && (c4 == 1));
}
//END CODE
int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
