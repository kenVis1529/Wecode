/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

void tamGiacVuong_5()
{
//###INSERT CODE HERE -
    int h;
    cin >> h;
    if ((h < 3) || (h > 10)){
        cout << "Khong thoa dieu kien nhap.";
    }
    else {
        for (int i = 1; i <= h; i++){
            for (int j = 1; j <= h; j++){
                if (i == h) cout << "* ";
                else 
                {
                    if ((j == i) || (j == 1)) cout << "* ";
                    else cout << "  ";
                }
            }
            cout << endl;
        }
    }
//END CODE
}
int main()
{

    tamGiacVuong_5();
    return 0;
}
