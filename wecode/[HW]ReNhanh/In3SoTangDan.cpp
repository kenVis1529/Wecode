#include <iostream>

using namespace std;
int main(){
    double a, b, c, s1, s2, s3, m;
    cin >> a >> b >> c;
    
    m = min( min(a, b), c );
    if (m == a)
    {
        s1 = a;
        m = min(b, c);
        if (m == b){
            s2 = b;
            s3 = c;
        }
        else {
            s2 = c;
            s3 = b;     
        };  
    }
    else if (m == b)
    {
        s1 = b;
        m = min(a, c);
        if (m == a){
            s2 = a;
            s3 = c;
        }
        else {
            s2 = c;
            s3 = a;  
        };
    }
    else 
    {
        s1 = c;
        m = min(a, b);
        if (m == a){
            s2 = a;
            s3 = b;
        }
        else {
            s2 = b;
            s3 = a;  
        };
    };
    cout << s1 << " " << s2 << " " << s3;
    return 0;
}