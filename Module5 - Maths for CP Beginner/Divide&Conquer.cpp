#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int arr[n] ;
        int cntodd = 0 ;

        for(int i=0 ; i<n ; i++){
            cin >> arr[i] ;
            if(arr[i] % 2 != 0){
                cntodd++ ;
            }
        }

        int ans = INT_MAX ;
        if(cntodd % 2 == 0){
            cout << "0" << endl ;
        }

        else{

            for(int i=0 ; i<n ; i++){

                if(arr[i] % 2 == 0){
                    int cnt = 0 ;
                    while(arr[i] % 2 == 0){
                        cnt++ ;
                        arr[i] /= 2 ;
                    }
                    ans = min(ans,cnt) ;
                }
                else {
                    int cnt = 0 ;
                    while(arr[i] % 2 != 0){
                        cnt++ ;
                        arr[i] /= 2 ;
                    }
                    ans = min(ans,cnt) ;
                }
            }
            cout << ans << endl ;
        }
    }

    return 0;
}
