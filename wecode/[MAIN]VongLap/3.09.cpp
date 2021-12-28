#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, c = 0;
    string m;
    cin >> n;
    m = to_string(n);
    while (n > 0)
    {
        n /= 10;  
        ++c;      
    };
    for (int i = 0; i <= (c / 2); i++)
    {
        if (m[i] != m[(c - 1) - i])
        {
            cout << "false";
            return 0;
        };
    };
    cout << "true";
    
    
    return 0;
}