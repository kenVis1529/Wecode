/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <cmath>


int main()
{
    double a;
    int n;
    std::cin >> a >> n;

//###INSERT CODE HERE -
    double b = a / (1 / (n * 1.0));
    std::cout.precision(10);
    if ((ceil(b)-b) < (b-floor(b)))
        std::cout << ceil(b) * (1 / (n * 1.0));
    else 
        std::cout << floor(b) * (1 / (n * 1.0)); 
    return 0;
//END
}
