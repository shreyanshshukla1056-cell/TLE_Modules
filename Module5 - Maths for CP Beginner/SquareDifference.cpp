// #include<iostream>
// using namespace std ;
// int main() {

//     int t ;
//     cin >> t ;

//     while(t--){

//         long long a , b ;
//         cin >> a >> b ;

//         //  (a+b)*(a-b) = a*a - b*b

//         long long x = a+b ;

//         if(a-b == 1){
//             cout << "YES" << endl ;
//         }
    
//         else{
//             cout << "NO" << endl ;
//         }

//     }
    
//     return 0 ;
// }

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a - b == 1 && isPrime(a + b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
