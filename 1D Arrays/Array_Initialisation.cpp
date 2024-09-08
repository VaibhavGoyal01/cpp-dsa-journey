#include<iostream>
using namespace std;

int main (){

    int arr[5] = { 10 , 20 , 30, 1 , 34 };

    int n = sizeof(arr)/sizeof(int);

    for ( int i = 1 ; i<= n - 1 ; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}