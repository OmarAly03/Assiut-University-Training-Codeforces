#include <iostream>
using namespace std;
 
bool isLucky(int num){
    string str = to_string(num);
    for(int i=0;i<str.length();i++){
        if((str[i] != '4') && (str[i] != '7'))
            return false;
    } 
    return true;
}
int main() {
    int num1, num2;
    bool check = false;
    cin >> num1 >> num2;
 
    for (int i=num1 ; i <= num2 ; i++){
        if(isLucky(i)){
            cout << i << " ";
            check = true;
        }
    }
 
    if(!check) 
        cout << "-1";
}