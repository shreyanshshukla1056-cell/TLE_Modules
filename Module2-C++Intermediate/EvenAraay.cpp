#include<iostream>
using namespace std;

int main(){

    int t,n;
    cin >> t;
    int a[n];

    for (int j=0 ; j<t ; j++){
        cin >> n;

        int even_i = 0 , odd_i = 0, even_elem = 0 , odd_elem = 0 , nm = 0 ;

        for (int i=0 ; i<n ; i++){
            cin >> a[i];

            if(i % 2 == 0){
                even_i++;
            }
            else{
                odd_i++;
            }
            
            if(a[i] % 2 == 0){
                even_elem++;
            }
            else{
                odd_elem++;
            }

            if(i % 2 != a[i] % 2){
                nm++;
            }

        }
        if( even_i != odd_i || even_elem != odd_elem){
            cout << -1 << endl;
            continue;
        }
        else{
            cout << nm/2 << endl;
        }
    }
}