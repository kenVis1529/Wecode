#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main()
{
    int n, i, a, b;
    float s = 0;

    cin >> n;
    cout << fixed;
    cout.precision(2);
    if(n==3)

    {
        //Luu do 1
        i = 0; s = 1;
        while (i < n){
            s += sqrt(s / 2);
            ++i;
        };
        cout  <<  "Gia tri luu do 1 la " << s << endl;

        //Luu do 2
        i = 0; s = 1;
        while (i < n){
            s = 5 / sqrt(s);
            ++i;
        };
        cout  <<  "Gia tri luu do 2 la " << s << endl;

        //Luu do 3
        i = 0; s = 1;
        a = 5; b = 2;
        while (i < n){
            s *= (a + b) / sqrt(a + b);
            ++i;
            --a;
            b++;
        };
        cout  << "Gia tri luu do 3 la " << s;

    }

    else if(n==5)

    {
        //Luu do 1
        i = 0; s = 1; 
        while (i < n){
            s += sqrt(s / 2);
            ++i;
        };
        cout  <<  "Gia tri luu do 1 la " << s << endl;
        
        //Luu do 2
        i = 0; s = 1;
        while (i < n){
            s = 5 / sqrt(s);
            ++i;
        };
        cout  <<  "Gia tri luu do 2 la " << s << endl;

        //Luu do 3
        i = 0; s = 1;
        a = 5; b = 2;
        while (i < n){
            s *= (a + b) / sqrt(a + b);
            ++i;
            --a;
            b++;
        };
        cout  << "Gia tri luu do 3 la " << s;

    }

    else

    {
        i = 0; s = 1;
        while (i < n){
            s += sqrt(s / 2);
            ++i;
        };
        cout  <<  "Gia tri luu do 1 la " << s << endl;

        //Luu do 2
        i = 0; s = 1;
        while (i < n){
            s = 5 / sqrt(s);
            ++i;
        };
        cout  <<  "Gia tri luu do 2 la " << s << endl;

        //Luu do 3
        i = 0; s = 1;
        a = 5; b = 2;
        while (i < n){
            s *= (a + b) / sqrt(a + b);
            ++i;
            --a;
            b++;
        };
        cout  << "Gia tri luu do 3 la " << s;

    }

    return 0;
}