#include<iostream>
using namespace std;

int main(){
    
    int n;
    //cout << "Enter a number" <<  endl;
    cin >> n;

    if (n == 0 || n == 1){
        cout << n << endl;
    
    } else {
        int a = 0;
        int b = 1;
        int i = 2;

        while(i <= n){

           int c = a + b;
            a = b;
            b = c;
            
           i = i + 1;
        }
        cout << b;
    }

    return 0;
}