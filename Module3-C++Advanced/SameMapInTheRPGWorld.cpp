#include<iostream>
using namespace std;

int main(){

    int H , W ;
    cin >> H >> W ;

    int a[H][W] , b[H][W] ;

    for(int i=0 ; i<H ; i++){
        string s ; cin >> s ;
        for(int j=0 ; j<W ; j++){
            if(s[j] == '.'){
                a[i][j] = 0 ;
            }
            else{
                a[i][j] = 1 ;
            }
        }
    }

    for(int i=0 ; i<H ; i++){
        string s ; cin >> s ;
        for(int j=0 ; j<W ; j++){
            if(s[j] == '.'){
                b[i][j] = 0 ;
            }
            else{
                b[i][j] = 1 ;
            }
        }
    }

    for(int s=0 ; s<H ; s++){
        for(int t=0 ; t<W ; t++){
            bool done = true ;
            for(int i=0 ; i<H ; i++){
                for(int j=0 ; j<W ; j++){
                    if( a[i][j] != b[(i+s)%H] [(j+t)%W] ){
                        done = false ;
                        break ;
                    }
                }
                if(!done)break;
            }
            if(done){
                cout << "YES" << endl ;
                return 0 ;
            }
        }
    }

    cout << "NO" << endl ;
    
}