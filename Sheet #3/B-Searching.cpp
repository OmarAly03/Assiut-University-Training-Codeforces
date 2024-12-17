#include <iostream>
using namespace std;

int main(){
    int n, num;
    bool cond = false;
    cin >> n;

    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];

    cin >> num;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == num){
            cout << i;
            cond = true;
            break;
        }
    }
    if(!cond)
        cout << -1;

    return 0;
}