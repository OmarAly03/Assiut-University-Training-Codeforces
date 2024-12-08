#include <iostream>
using namespace std;
 
int main() {
    char c;
    cin >> c;
    
    if(((int)c) == 122) 
        cout << 'a';
    else
        cout << (char)(((int)c) + 1);
    return 0;
}