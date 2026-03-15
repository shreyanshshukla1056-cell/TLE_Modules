#include<iostream>
using namespace std ;

void solve(){
    int n ; cin >> n ;
    if(n % 2 == 0){
        cout << (n-1)/2 << " " << (n-1)/2 + 1 << " 1" << endl ;
    }
    else{
        int current = (n-1)/2 ;
        if(current % 2 == 0){
            cout <<  current - 1 << " " << current + 1 << " 1" << endl ;
        }
        else{
            cout <<  current - 2 << " " << current + 2 << " 1" << endl ;
        }
    }
}

int main(){
    int t ;
    cin >> t ;
    while(t--)
        solve() ;
}