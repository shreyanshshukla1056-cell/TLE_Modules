#include<iostream>
using namespace std ;
int main(){

    long long int k ;
    cin >> k ;

    cout << k*k*k ;
    
}


// 1 ,3 ,5 ,7 ,9 . . . . . . ,(k-1) ,k

// sum = n( 2a + (n-1)d ) / 2         
// sum = (k-1)(2(1) + (k-2)(1)) / 2         sum = k(k-1)/2

// sum of first n odd no = n^2

// ans = sum of first k numbers  -  sum of first k(k-1)/2 numbers

// ans =  k*k  -   k(k-1)/2 * k(k-1)/2   =   k*k*K 
