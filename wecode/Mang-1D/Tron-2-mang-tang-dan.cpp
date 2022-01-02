#include<iostream>
using namespace std;

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

    for (int i = 0; i < na + nb; i++){
        if ((a[ida] <= b[idb]) && (ida <= na)) {
            c[i] = a[ida];
            ++ida;
        } else if ((b[idb] <= a[ida]) && (idb <= nb)){
            c[i] = b[idb];
            ++idb;
        }
    }
    for (int i = 0; i < na + nb; i++){
        cout << c[i] << " ";
    }
    return 0;
}