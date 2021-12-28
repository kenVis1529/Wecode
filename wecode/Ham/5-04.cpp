/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/
#include<iostream>

//###INSERT CODE HERE -
using namespace std;
bool prime(int n); 
int reverse(int n);
int main(){
    int a, b, i, count = 0;
    cin >> a >> b;
    // Cho i bắt đầu từ số lẻ
    if (a % 2 == 0){
        if (a == 2)
            count++;
        i = a + 1;
    }
    else i = a;
    //Chỉ duyệt số lẻ
    for (; i <= b; i += 2)
        if (prime(i) && prime(reverse(i)))
            ++count;
    cout << count;
    return 0;
}

bool prime(int n){ //Kiểm tra có phải số nguyến tố
    if ((n == 1) || (n % 2 == 0)) return false;
    else{
        for (int i = 3; i <= (n / 2); i += 2)
            if (n % i == 0)
                return false;
        return true;
    };
}

int reverse(int n){ //Trả về số đảo
    int b = 0;
    while (n != 0){
        b = (b * 10) + (n % 10);
        n /= 10;
    };
    return b;
}

// END CODE