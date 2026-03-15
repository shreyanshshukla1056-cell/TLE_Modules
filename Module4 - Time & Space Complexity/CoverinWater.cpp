#include<iostream>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    int flag = 0;
    int count_of_empty =0 ;
    int current_count_of_empty = 0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='.'){
            current_count_of_empty ++ ;
        }
        else{
            count_of_empty += current_count_of_empty ;
            if(current_count_of_empty >= 3){
                flag = 1 ;
            }
            current_count_of_empty = 0 ;
        }
    }
    count_of_empty += current_count_of_empty ;
    if(current_count_of_empty >= 3){
        flag = 1 ;
    }

    if(flag){
        cout << 2 << endl ;
    }
    else {
        cout << count_of_empty << endl ;
    }
}

int main (){
    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
    
    return 0 ;
}