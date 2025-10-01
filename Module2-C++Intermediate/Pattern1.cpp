#include<iostream>                                         //   ****      ***     *****
using namespace std;                                       //     *        *         *
int main(){                                                //    *        ***       *
                                                           //   ****               *
                                                           //                     *****
    int n;                                              
    cin >> n;

    for(int i=0 ; i<n ; i++){
        if( (i==0) || (i==n-1)){
            for(int j=0 ; j<n ; j++){
            cout <<"*";
            }
        }
        
        else{
            for(int k=0 ; k<n ; k++){
                if(k == n-i-1){
                    cout << "*";
                }
                else {
                    cout <<" ";
                }
            }

        }

        cout << endl;

    }
        cout << endl;  
        
    
return 0;
}
