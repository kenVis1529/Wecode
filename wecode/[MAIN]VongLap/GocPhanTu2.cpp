#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> stat;
    int n, x, y, i = 0;
    cin >> n;
    while (i < n)
    {
        ++i;
        cin >> x >> y;

        if ((x == 0) && (y == 0))
            stat.push_back("O");
        else if (x == 0)
            stat.push_back("T");
        else if (y == 0)
            stat.push_back("H");
        else if (x > 0)
            if (y > 0)
                stat.push_back("I");
            else    
                stat.push_back("IV");
        else    
            if (y > 0)
                stat.push_back("II");
            else    
                stat.push_back("III"); 
    };
    for (i = 0; i < n; i++)
        cout << stat[i] << endl;
    return 0;
}