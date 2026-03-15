#include<iostream>
using namespace std;
int main (){

    int n , max=0 , min_buries=0 ; 
    cin >> n ;

    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    for(int i=0 ; i<n ; i++){
        if ( arr[i] > max ){
            max = arr[i] ;
        }
    }
    for(int i=0 ; i<n ; i++){
        min_buries += max - arr[i] ;
    }
    cout << min_buries << endl ;

    return 0 ;
}