#include<iostream>
using namespace std;

int main(){

    int arr[5] = { 10 , 20 , 30 , 40 , 50};
    int n = sizeof(arr)/sizeof(int);

    int k;
    cin >> k;

    for( int j = 1 ; j <= k ; j++){

        int temp = arr[n-1];

        for ( int i = n-1; i >=1 ; i-- ){

            arr[i] = arr[i-1];

        }   

    arr[0] = temp;

    }

      for ( int k = 0 ; k < n ; k++){

        cout<<arr[k] << " ";

    }
    cout << endl;

    return 0;
} 