//                                          PERMUTATION with arrays

#include<iostream>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;

    int a[n];
    int b[n];

    int count=0;

    for(int i=0 ; i<n ; i++){
        cin>>a[i];        
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];       
    }

    // cout << "BEFORE SORTING" << endl;

    // for(int i=0 ; i<n ; i++){
    //     cout << a[i] << " " ;     
    // }
    // cout << endl;

    // for(int i=0 ; i<n ; i++){
    //     cout << b[i] << " " ;     
    // }
    // cout << endl;

    sort(a , a+n);
    
    sort(b , b+n);

    // cout << "AFTER SORTING" << endl;

    // for(int i=0 ; i<n ; i++){
    //     cout << a[i] << " " ;     
    // }
    // cout << endl;

    // for(int i=0 ; i<n ; i++){
    //     cout << b[i] << " " ;     
    // }
    // cout << endl;

    for(int i=0 ;i<n ;i++){
        if( a[i] == b[i] ){
            count++;
        }
    }
    if(count==n){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }

   
}
