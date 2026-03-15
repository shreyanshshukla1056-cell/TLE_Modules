#include<iostream>
using namespace std;

int main(){

    int x , y , z , k , s ;           //   X + Y + Z = S   ;   0 ≤ X ,Y, Z ≤ K
    cin >> k >> s ;

    int count =0 ;

    for(int x=0 ; x<=k ; x++){
        for(int y=0 ; y<=k ; y++){
            int z = s - ( x + y ) ;
            if(z>=0 && z<=k){
                count++ ;
            }
        }
    }

    // for(int x=0 ; x<=k ; x++){
    //     for(int y=0 ; y<=k ; y++){
    //         for(int z=0 ; z<=k ; z++){
    //             if(x+y+z==s){
    //                 count++ ;
    //             }
    //         }
    //     }
    // }

    cout << count ;

    return 0;
}