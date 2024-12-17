#include <iostream>
using namespace std;

int log_base_2(unsigned long long n) {
    if (n == 1) 
        return 0;
    return 1 + log_base_2(n / 2);
}

int main() {
    unsigned long long n;
    cin >> n;
    cout << log_base_2(n) << endl;
    return 0;
}
