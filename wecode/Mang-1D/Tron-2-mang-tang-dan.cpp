#include<iostream>
using namespace std;
void merge(int a[], int b[], int &na, int nb);
int main (){
    int na, nb, a[100], b[100], c[100], ida = 0, idb = 0;
    cin >> na;
    for (int i = 0; i < na; i++){
        cin >> a[i];
    }
    cin >> nb;
    for (int i = 0; i < nb; i++){
        cin >> b[i];
    }
    merge(a, b, na, nb);

    for (int i = 0; i < na; i++){
        cout << a[i] << " ";
    }
    return 0;
}
void merge(int a[], int b[], int &na, int nb){
    int idb = 0, i = 0, j, check = 0, t = na + nb;

    // Nếu phần tử a > pt b thì pt b sẽ được chèn vào trước pt a đó
    while ((i < na) && (idb < nb)){
        if (a[i] >= b[idb]) {
            for (j = na; j > i; j--)
                a[j] = a[j - 1];
            a[i] = b[idb];
            ++idb;
            ++na;
        };
        ++i;
    };
    //Nếu (không có pt a nào > pt b) hoặc (mảng b vẫn chưa được chèn hết) thì chèn tất cả pt b (còn lại) vào đuôi mảng a
    if (na != t){
        while (idb < nb){
            a[na] = b[idb];
            ++idb;
            ++na;
        }
    }
}