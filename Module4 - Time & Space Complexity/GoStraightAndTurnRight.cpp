#include<iostream>
using namespace std;
int main (){

    int n ;
    cin >> n ;
    string t ;
    cin >> t ;

    int x=0 , y=0 ;
    char dir = 'r' ;

    for(int i=0 ; i<n ; i++){
        if(t[i]=='S'){
            if(dir=='r'){
                x++ ;
            }
            else if(dir=='l'){
                x-- ;
            }
            else if(dir=='t'){
                y++ ;
            }
            else {
                y-- ;
            }
        }
        else{
            if(dir=='r'){
                dir = 'b';
            }
            else if(dir=='b'){
                dir = 'l';
            }
            else if(dir=='l'){
                dir = 't';
            }
            else if(dir=='t'){
                dir = 'r';
            }
        }
    }
    
    cout << x << " " << y ;

    return 0 ;
}