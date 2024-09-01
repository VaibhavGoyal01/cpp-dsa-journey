#include<iostream>
using namespace std;

int main(){

    int n,j;
    cin >> n;
   
    for(int i = 1; i <= n ; i++){

        for(j = 1; j<=n-i ;j++){

            cout << " ";
                
        }

       // int num = i;

            for (j = 1; j <= i; j++){

               cout << '*';      
               // cout << num;
               // num++;

            }
            
        cout <<endl;
    }
    return 0;
}
