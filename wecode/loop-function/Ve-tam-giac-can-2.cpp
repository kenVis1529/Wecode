/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

void tamGiacCan_2()
{
//###INSERT CODE HERE -
    int h;
    cin >> h;
    if ((h < 3) || (h > 10)){
        cout << "Khong thoa dieu kien nhap.";
    }
    else {
        // n = 5 or 4
        // lẻ -> 1 + 2*(5-1) = 9
        // chẵn -> 2*4
        // dòng m: (j >= i) || (j <= 9 - i + 1) "* "
        int f, t;
        if (h % 2 == 0) f = 2 * h;
        else f = 1 + 2 * (h - 1);
        for (int i = 1; i <= h; i++){
            for (int j = 1; j <= f; j++){
                if (h % 2 != 0) t = i - 1;
                else t = i;
                if ((j >= i) && (j <= f - t)) 
                    cout << "* ";
                else cout << "  ";
            }
            cout << endl;
        }
    }
//END CODE
}
int main()
{

    tamGiacCan_2();
    return 0;
}
