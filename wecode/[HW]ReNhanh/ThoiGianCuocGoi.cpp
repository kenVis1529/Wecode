#include <iostream>

using namespace std;
int main(){
    int min1, min2_10, min11, s, count =0;
    cin >> min1 >> min2_10 >> min11 >> s;
    if (s >= min1)
        s -= min1;
        ++count;
        if (s >= min2_10){
            while ((s >= min2_10)  && (count < 10)) 
            {
                s -= min2_10;
                ++count;
            }; 
            
            while ((s >= min11) && (count >= 10)){
                s -= min11;
                ++count;
            };
        }
    cout << count;     
    return 0;
}