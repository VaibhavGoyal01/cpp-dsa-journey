#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n == 0 || n == 1){

        cout << true << endl;

    } else {

        int a = 0;
        int b = 1;

        while (true){

            int c = a + b;

            if ( c == n){
                cout << true <<endl;
                break;
            }
            if ( c > n){
                cout << false <<endl;
                break;
            }

            a = b;
            b = c;

        }
    }
    

    return 0;
}