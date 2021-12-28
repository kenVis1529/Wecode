#include <iostream>

using namespace std;
void twin(int);
bool prime(int);
int main(){
    int n;
    cin >> n;
    twin(n);
    return 0;
}
bool prime(int n){
    for (int j = 3; j <= (n / 2); j += 2){
        if (n % j == 0) return false;
    }
    return true;
}
void twin (int n){
    int c = 0;
    for (int i = 3; i < n; i += 2){
        if (prime(i) && prime(i + 2) && (i + 2 < n))
        {
            cout << i << ", " << i + 2 << endl;   
            ++c;
        }
    }
    cout << "Tong: " << c << " cap so sinh doi < " << n;
}