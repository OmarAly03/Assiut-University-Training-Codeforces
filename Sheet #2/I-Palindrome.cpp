#include <iostream>
using namespace std;
 
bool isPalindrome(string str){
    for(int i=0 ; i < ((str.length()) / 2) ; i++){
        if(str[i] != str[str.length() - i - 1])
        return false;
    }
    return true;
}
 
int reverseString(string str){
    string temp;
    for(int i=0 ; i < str.length() ; i++){
        temp += str[str.length() - i - 1];
    }
    return stoi(temp);
}
 
int main() {
    string num;
    bool check;
    getline(cin, num);
 
    check = isPalindrome(num);
    if(check)
        cout << reverseString(num) << endl << "YES";
 
    else{
        cout << reverseString(num) << endl << "NO";
    }
    return 0;
}