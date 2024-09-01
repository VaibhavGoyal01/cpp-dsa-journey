#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i;

    for( i = 1 ; i <= n ; i++ ){

        int num = i % 2 == 0 ? 0:1;

        for( int j = 1 ; j <= i ; j++ ){

            cout << num << " " ;
            //flip the number

            /*

            if(num =1){
                cout << 0;
            }else{
            cout << 1 
            }
            
            num = !num;

            */
           
           num = 1 - num;
            
           
        }
        
        cout << endl;
    }
    
    return 0;
}