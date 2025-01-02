#include <iostream>
using namespace std;

void SelectionSort(int arr[] , int n){
    for(int i = 0 ; i <= n-2 ; i++){
        int  minIdx = i;
        for(int j = i+1 ; j <= n-1;j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}

int main() {
    
    int arr[] = {50,30,10,20,40};
    int n = sizeof(arr)/sizeof(int);

    SelectionSort(arr , n);
    
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
