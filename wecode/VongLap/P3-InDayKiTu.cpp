#include <iostream>

using namespace std;
int main() {
    int n;
    string k;
    cin >> n;
    do {
        cin >> k;
        if (k == "X")
            break;
        for (int i = 1; i <= n; i++)
            cout << k << " ";
    } while (k != "X");
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    string a, b, c;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        a += "+ ";
        b += "- ";
        c += "+ - ";
    };
    cout << a << endl << b << endl << c;
}
*/