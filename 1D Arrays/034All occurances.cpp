#include<iostream>
using namespace std;

int main(){

    int arr[5] = { 10 , 20 ,10 , 40 , 10};
    int n = sizeof(arr)/sizeof(int);

    int target;
    cin >> target;

    int i;
    int count = 0;
    
    for ( i = 0 ; i < n ; i++){

        if ( arr[i] == target){
            cout << i << endl;
            count++;
        }
    }
    if (count == 0 ){
        cout << " not found ";
    }
}
