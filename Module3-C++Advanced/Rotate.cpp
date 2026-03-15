#include<iostream>
using namespace std;

int main(){ 

    int n ; cin >> n ;
    int arr[n][n];

    for(int i=0 ; i<n ; i++){
        string s;
        cin >> s;                       // ek row ke sare elements ko ek sath le liya as a string
        for(int j=0 ; j<n ; j++){
            arr[i][j] = s[j] - '0' ;
        }
    }

    int prev = arr[0][0] ;

    for(int j=0 ; j<n-1 ; j++){
        arr[j][0] = arr[j+1][0] ;       // arr[0][0]=arr[1][0] ; arr[1][0]=arr[2][0] .........
    }

    for(int j=0 ; j<n-1 ; j++){
        arr[n-1][j] = arr[n-1][j+1] ;   // arr[3][0]=arr[3][1] ; arr[3][1]=arr[3][2] .........
    }

    for(int j=n-1 ; j>0 ; j--){
        arr[j][n-1] = arr[j-1][n-1] ;   // arr[3][3]=arr[2][3] ; arr[2][3]=arr[1][3] .........
    }

    for(int j=n-1 ; j>1 ; j--){
        arr[0][j] = arr[0][j-1] ;       // arr[0][1]=arr[0][2] ; arr[0][2]=arr[0][3] .........
    }
    
    arr[0][1] = prev ;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << arr[i][j] ;
        }
        cout << endl ;
    }

    return 0;
}