#include <iostream>
using namespace std;

void bubbleSort(int arr[] , int n){
    for(int i = 1 ; i <= n-1 ; i++){
        for(int j = 0 ; j < n-i ; j++){
            if(arr [j] > arr [j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {10,50,20,40,30,60};
    int n = sizeof(arr)/sizeof(int);
    
    bubbleSort(arr ,n);
    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << endl;
    }
}
