#include <iostream>
using namespace std;

void print_even_indices(int *arr, int index, int size){
    if(index >= size)
        return;
    if(index % 2 == 0){
        print_even_indices(arr, index + 1, size);
        cout << arr[index] << " ";
    }
    else
        print_even_indices(arr, index + 1, size);
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    print_even_indices(arr, 0, n);
    return 0;
}