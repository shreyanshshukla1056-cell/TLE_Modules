#include<iostream>
using namespace std;
int main(){
    int n , x , count=0 ;
    cin >> n ;
    while(n--){
        cin >> x ;
        for(int i=1 ; i<=x ; i++){
            if(x % i == 0){
                count++ ;
            }
        }
        cout << count << endl ;
        count = 0 ;
    }
}
