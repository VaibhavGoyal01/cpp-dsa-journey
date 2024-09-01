#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    
    
    for ( int i = 1 ; i <= n ; i++ ){

        //char ch = 'A';

        for ( int j = 0 ; j < n - i + 1 ; j++ ){

            cout << "*";
            //cout << ch;
           // ch++;

        }

        cout<<endl;
    }

    return 0;
}