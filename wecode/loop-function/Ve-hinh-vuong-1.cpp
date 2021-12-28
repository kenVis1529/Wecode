/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

//###INSERT CODE HERE -
void hinhVuong_2(){
    int h;
    std::cin >> h;
    if ((h < 3) || (h > 20)){
        std::cout << "Khong thoa dieu kien nhap.";
    } else {
        for (int i = 0; i < h; i++){
            for (int j = 0; j < h; j++){
                if ((i == 0) || (i == h - 1)){
                    std::cout << "* ";
                } else {
                    if ((j == 0) || (j == h - 1))
                        std::cout << "* ";
                    else std::cout << "  ";
                }
            }
            std::cout << std::endl;
        }
    }
}
// END CODE
int main()
{
    hinhVuong_2();
    return 0;
}
