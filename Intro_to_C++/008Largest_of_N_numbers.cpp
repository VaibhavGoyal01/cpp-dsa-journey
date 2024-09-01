#include<iostream>
#include<climits>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int lsf = INT_MIN;//largest soo far
    int ssf = INT_MAX;//Smallest soo far 
    int i = 1;

    while (i <= n){
        
        int x;
        cin >> x;

        if( x > lsf){
            lsf = x;
        }
        if (x < ssf){
            ssf = x;
        }
        
        i = i + 1;

    }

    cout << "Largest Number: " << lsf << endl;
    cout << "Smallest Number: " << ssf << endl;

    return 0;
}