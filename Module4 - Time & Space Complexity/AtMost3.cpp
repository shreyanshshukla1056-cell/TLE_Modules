#include<iostream>
using namespace std;
bool cnt[3000001] ;
int main (){
    int N , W ;
    cin >> N >> W ;
    int arr[N] ;

    for(int i=0 ; i<N ; i++){
        cin >> arr[i] ;
    }

    for(int i=0 ; i<3000001 ; i++){
        cnt[i] = false ;
    }

    for(int i=0 ; i<N ; i++){
        cnt[arr[i]] = true ;
    }

    for(int i=0 ; i<N ; i++){
        for(int j=i+1 ; j<N ; j++){
            cnt[arr[i] + arr[j]] = true ;
        }
    }

    for(int i=0 ; i<N ; i++){
        for(int j=i+1 ; j<N ; j++){
            for(int k=j+1 ; k<N ; k++){
                cnt[arr[i] + arr[j] + arr[k]] = true ;
            }
        }
    }
    int ans = 0 ;
    for(int i=1 ; i<=W ; i++){
        if(cnt[i] == true){
            ans++ ;
        }
    }

    cout << ans << endl ;
    
}