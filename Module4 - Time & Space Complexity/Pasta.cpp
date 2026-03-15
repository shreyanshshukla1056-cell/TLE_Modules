#include<iostream> 
using namespace std ;
int main () {

    int n , m ;
    cin >> n >> m ;
    int a[n] , b[m] ;

    for(int i=0 ;i<n ;i++){
        cin >> a[i] ;
    }
    for(int i=0 ;i<m ;i++){
        cin >> b[i] ;
    }

    bool ans = true ;
    for(int i=0 ; i<m ;i++){
        bool flag = false ;
        for(int j=0 ; j<n ;j++){
            if(b[i]==a[j]){
                a[j]=-1 ;
                flag = true ;
                break ;
            }
        }
        if(flag == false){
            ans = false ;
            break ;
        }
    }

    if(ans==true){
        cout << "YES" << endl ;
    }
    else{
        cout << "NO" << endl ;
    }

    return 0 ;
}