#include<iostream>
using namespace std;

int main(){

    int t ; cin >> t ;

    while(t--){
        int n ; cin >> n ;
        int arr[n] ;
        for(int i=1 ; i<=n ; i++){
            cin >> arr[i] ;
        }

        long long count_zero = 0 ;
        long long sum = 0 ;
        bool flag = false ;

        for(int i=1 ; i<=n-1 ; i++){
            sum += arr[i] ;
            if( arr[i] > 0 ){
                flag = true ;
            }
            if( arr[i] == 0 && flag == true){
                count_zero++ ;
            }
        }

        cout << count_zero + sum << endl ;
    }
    return 0;
}