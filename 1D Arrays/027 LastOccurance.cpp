#include<iostream>
using namespace std;

int main(){
    int arr[5] = { 10 , 20 , 30 , 10 , 10} ;

    int target;
    cin >> target;

    int n = sizeof(arr)/sizeof(int);

    int i;

    for( i = n - 1 ; i >= 0 ; i++){

        if(arr[i] == target ){

            cout << i << endl;
            break;
            
        }
    }
        if(i == -1){
            
            cout << "Target not found";

        }
}