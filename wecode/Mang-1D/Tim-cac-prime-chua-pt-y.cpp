/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

//###INSERT CODE HERE -
void NhapmangSNT(int a[], int &n){
    cin >> n;
    if (n > 0){
        a[0] = 2;
        int num = 3, i = 1;
        while (i < n){
            int check = 1;
            for (int j = 3; j <= num / 2; j += 2){
                if (num % j == 0){
                    check = 0;                   
                    break;
                }
            }
            if (check == 1) {
                a[i] = num;
                ++i;
            }
            num += 2;
        }
    }
}
int SoPhanTuChuaY(int a[], int n, int y){
    int count = 0;
    for (int i = 0; i < n; i++){
        while (a[i] > 0){
            if (a[i] % 10 == y){
                ++count;
                break;
            } 
            a[i] /= 10;
        }
    }
    return count;
}
//END CODE
int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}