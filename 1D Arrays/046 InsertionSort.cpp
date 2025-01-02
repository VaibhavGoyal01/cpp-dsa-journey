#include <iostream>
using namespace std;

void insetionSort(int arr[] , int n){
    for(int i = 1 ; i <= n-1 ; i++){
        int key = arr[i];
        int j = i-1;
        while ( j>=0 and key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    
    int arr[] = {50,30,10,20,40};
    int n = sizeof(arr)/sizeof(int);

    insetionSort(arr , n);
    
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
