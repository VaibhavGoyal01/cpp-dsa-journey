#include<iostream>
using namespace std;

int main(){

    int arr[100];
    int n;
    cin >> n;
        // array input and array printing 
        
    for( int i = 0 ; i <= n-1 ; i++ ){

        cin >> arr[i];
        cout << arr[i] << " ";

    }

        cout << endl;
        //print array in reverse 
    for ( int i = n-1 ; i>= 0 ; i--){

        cout << arr[i] << " ";

    }
}