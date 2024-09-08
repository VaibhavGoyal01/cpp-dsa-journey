#include<iostream>
using namespace std;
 
int main(){

    int arr[5];

    cout << sizeof(arr) << 'B' << endl;

    int size = sizeof(arr) / sizeof (int) ;

    cout << "Elements that can be added : "<< size << endl;

    return 0;
}