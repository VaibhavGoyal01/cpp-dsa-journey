#include<iostream>
using namespace std;

int main(){

    int arr[5] = { 10 , 20 , 30 , 40 , 50} ;
    int n = sizeof(arr)/sizeof(int);

    int i = 0 , j = n - 1;

    while( i < j ){

            swap(arr[i],arr[j]);
            i++;
            j--;

    }

    for ( int k = 0 ; k < n ; k++){

        cout<<arr[k] << " ";

    }
    
    return 0;
}