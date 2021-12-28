#include <iostream>

using namespace std;
int main(){
    int v1, w1, v2, w2, maxw, totalv = 0, totalw = 0;
    cin >> v1 >> w1 >> v2 >> w2 >> maxw;

    if ((w1 <= maxw) && (w2 <= maxw)){
        if ((w1 + w2) <= maxw)
        {
            totalv = v1 + v2;
            totalw = w1 + w2;
        }          
        else 
        {
            totalv = (v1 > v2) ? ( v1 ) : ( v2 );
            totalw = (v1 > v2) ? ( w1 ) : ( w2 );
        };
    }
    else if (w1 <= maxw)
    {
        totalv = v1;
        totalw = w1;
    }
    else if (w2 <= maxw)
    {
        totalv = v2;
        totalw = w2;
    };
    cout << totalv << " " << totalw;
    return 0;
}