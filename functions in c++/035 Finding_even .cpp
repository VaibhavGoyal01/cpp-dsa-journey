#include<iostream>
using namespace std;

/*
void isEven( int x){

    if( x % 2 == 0){

        cout << "Even" << endl;

    }else{

        cout << "Odd" << endl;

    }

    return; // optional 
}
*/

bool isEven ( int x){

    return x % 2 == 0;
    
}

int main(){

    int n;
    cin >> n;

    cout << "Let me check if your num is even or odd" << endl;

    // isEven(n);

    cout << isEven(n) << endl;

    return 0;

}
