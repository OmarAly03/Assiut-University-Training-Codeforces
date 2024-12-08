#include <iostream>
using namespace std;
 
long long factorial(int n) {
    if (n < 0) return -1; 
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
 
int main() {
    int testcases;
    cin >> testcases;
 
    while (testcases--) {
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }
 
    return 0;
}