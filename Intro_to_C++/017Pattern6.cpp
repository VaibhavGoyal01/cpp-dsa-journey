#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for( int i = 1 ; i <= n ; i++ ){

        for (int j = 1 ; j <= n - i ; j++ ){

            cout << " ";
        }

        //int num = i;

        for ( int j = 1 ; j <= i ; j++ ){

          //  cout << num;
          cout << "*";
           // num++;
        }

        //int k = 2*i-2;
           // int k = num - 2;

        for (int j = 1; j <= i-1 ; j++ ){
            //cout<<k;
            cout << '*';
            //k--;
            
        }

        cout << endl;
    }

    return 0;
}