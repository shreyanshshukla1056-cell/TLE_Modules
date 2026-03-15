#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n ;
    int a , b ;
    cin >> a >> b ;

//  To Check if (x*a + y*b = n)
    
    // for(int x=0 ; x<n ; x++){
    //     for(int y=0 ; y<n ; y++){
    //         if(((x*a) + (y*b)) == n){
    //             cout <<"YES"<< endl << x << " " << y ;
    //             return 0 ;
    //         }
    //     }
    // }
    // cout << "NO" << endl ;
    // return 0 ;

    for(long long x = 0; x * a <= n; x++) {
        if((n - a * x) % b == 0) {
            long long y = (n - a * x) / b ;

            if(y >= 0) {
                cout << "YES" << endl ;
                cout << x << " " << y ;
                return 0 ;
            }
        }
    }

cout << "NO" << endl;

}