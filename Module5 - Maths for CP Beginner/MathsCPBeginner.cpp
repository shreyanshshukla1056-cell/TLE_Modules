#include<bits/stdc++.h>
using namespace std ;
int main (){

    //   MODULO(%) ----->   overflow ke condn me use krte h in CP

    // MODOLO ADD ---->   (A+B) % M = ( (A % M) + (B % M) ) % M ;
    // MODULO SUB ---->   (A-B) % M =  ( ( (A % M) - (B % M) ) + M ) % M ;
    // MODULO MULTI ---->   (A*B) % M = ( ( A % M ) * ( B % M ) ) % M

    int A , B , M ;
    cin >> A >> B >> M ;

    // MODOLO ADDITION
    cout << "(A+B) % M = " << (A+B) % M  << endl ;
    cout << "(A+B) % M = " << ( (A % M) + (B % M) ) % M << endl ;

    // MODOLO SUBTRACTION
    cout << "(A-B) % M = " << (A-B) % M  << endl ;
    cout << "(A-B) % M = " << ( ( (A % M) - (B % M) ) + M ) % M << endl ;

    // MODOLO MULTIPLICATION
    cout << "(A*B) % M = " << (A*B) % M  << endl ;
    cout << "(A*B) % M = " << ( (A % M) * (B % M) ) % M << endl ;

    // GCD ( GREATEST COMMON DIVISOR )
    cout << "GCD OF A & B IS " << __gcd(A, B) << endl ;

    // LCM ( A , B ) = A x B / GCD ( A , B )
    cout << "LCM of A & B is " << (A*B)/ __gcd(A,B) << endl  ;

    // A = 2^3 x 5^2 x 7^1 x 11^2
    // B = 2^5 x 5^3 x 7^2 x 11^1

    // GCD ( A , B ) = 2 ^ (min(3,5)) x 5 ^ (min(2,3)) ....
    //               = 2^3 x 5^2 x 7^1 x 11^1 

    // LCM ( A , B ) = 2 ^ (max(3,5)) x 5 ^ (max(2,3)) ....
    //               = 2^5 x 5^3 x 7^2 x 11^2

    // GCD ( A , A + 1 ) = 1
} 