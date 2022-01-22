#include <iostream>

struct date
{
    int day;
    int month;
    int year;
};
struct SUA
{
    float weight;
    date NGAY;
    char brand[35];
};


using namespace std;
int main()
{
    int n, max = -999999;
    string bigbrand, choice;
    SUA hs[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> hs[i].weight;
        cin >> hs[i].NGAY.day;
        cin >> hs[i].NGAY.month;
        cin >> hs[i].NGAY.year;
        cin >> hs[i].brand;
    }
    cin >> choice;

    for (int i = 0; i < n; i++){
        if (hs[i].weight > max) {
            max = hs[i].weight;
            bigbrand = hs[i].brand;
        };    
    }
    if (choice == bigbrand) cout << "YES";
    else cout << "NO";
    return 0;
}
