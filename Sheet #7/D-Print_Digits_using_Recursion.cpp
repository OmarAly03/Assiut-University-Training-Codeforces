#include <iostream>
using namespace std;

void print_digits(int n) {
    if (n == 0) {
        cout << "0 ";
        return;
    }
    if (n < 10) {
        cout << n << " ";
        return;
    }
    print_digits(n / 10);
    cout << n % 10 << " ";
}

int main() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        unsigned int n;
        cin >> n;
        print_digits(n);
        cout << endl;
    }

    return 0;
}
