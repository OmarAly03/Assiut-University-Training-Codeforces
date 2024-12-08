#include <iostream>
using namespace std;
 
int main() {
    int n, first, second;
    cin >> n;
    
    second = n % 10;
    first = n / 10;
    if((first == 0) || (second == 0))
        cout << "YES";
    else if((first % second == 0) || (second % first == 0))
        cout << "YES";
    else cout << "NO";
}