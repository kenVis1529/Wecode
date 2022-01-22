/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>

using namespace std;

//###INSERT CODE HERE -
void inputArray(int a[],int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void outputArray(int a[],int n){
    
}
int isTotalSquare(int a[],int n){

}
int maxSquare(int a[],int n){

}
//END CODE

int main()
{
    int n, a[100];
    inputArray(a,n);
    cout<<"Array:"<<endl;
    outputArray(a,n);
    cout<<endl;
    if (isTotalSquare(a,n)==1)
    {
        cout <<"Mang toan so chinh phuong"<<endl;
        cout << "So chinh phuong lon nhat: "<<maxSquare(a,n);
    }
    else cout<<"Mang khong phai chua toan cac so chinh phuong";


    return 0;
}
