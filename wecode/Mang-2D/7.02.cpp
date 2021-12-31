/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

//###INSERT CODE HERE -
int Fibonaci(int n){
    int a[201];
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; i++){
        a[i] = a[i-1]+a[i-2];
    }
    return a[n];
}
void Nhapmang(int a[][MAX], int &n){
    cin >> n;
}
void Xuatmang(int a[][MAX], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            //Viền trái và viền trên
            if ((i == 0) || (j == 0)){
                a[i][j] = Fibonaci(i+j+1);
                cout << Fibonaci(i+j+1) << " ";
            }
            else //Còn lại
            {
                a[i][j] = a[i][j-1] + a[i-1][j-1];
                cout << a[i][j-1] + a[i-1][j-1] << " ";
            }
        }
        cout << endl;
    }
}
//END CODE
int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	
    return 0;
}