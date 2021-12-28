/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

void tamGiacCanChuSo_1();

int main() {
    tamGiacCanChuSo_1();
    return 0;
}

//###INSERT CODE HERE -
void tamGiacCanChuSo_1(){
    int h;
    std::cin >> h;
    if ((h < 3) || (h > 9)){
        std::cout << "Khong thoa dieu kien nhap.";
    }
    else {
        // Tâm: t = ((h * 2 - 1) / 2) + 1
        // Dòng i: t - (i - 1) -> t + (i - 1)
        
        // Độ dài cạnh đáy
        int m = h * 2 - 1;
        //Vị trí số 1 
        int t = (m / 2) + 1;

        for (int i = 1; i <= h; i++){
            int num = i;
            for (int j = 1; j <= m; j++){
                if ( (j >= t - (i - 1)) && (j <= t + (i - 1)) )
                {
                    if (num == i) 
                    {
                        std::cout << " " << num << " ";
                        num = 0;
                    } else {
                        std::cout << "   ";
                        num = i;
                    }
                }
                else
                {
                    std::cout << "   ";
                }
            }
            std::cout << std::endl;
        }
    }
}
//END CODE