#include <iostream>
#include <math.h>

using namespace std;

void inputArray(int a[], int &na){
    cin >> na;
    for (int i = 0; i < na; i++){
        cin >> a[i];
    }
}
void outputArray(int a[], int na){
    for (int i = 0; i < na; i++){
        cout << a[i] << " ";
    }
}
void insertElement(int a[], int &n, int pos, int x){
    for (int i = n; i >= pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = x;
    ++n;       
}
int main()
{
    int n, a[100],pos,x;
    inputArray(a,n);
    cin >> x >> pos;
    insertElement(a,n,pos,x);
    outputArray(a,n);
    return 0;
}
