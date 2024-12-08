#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
    float dis, result, original;
    cin >> dis >> result;
    original = result / (1 - (dis / 100));
 
    cout << fixed << setprecision(2) << original;
    return 0;
}