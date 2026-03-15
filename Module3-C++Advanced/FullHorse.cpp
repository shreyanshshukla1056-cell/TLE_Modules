//                           FULL HORSE

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[14];
    for(int i=0 ; i<14 ; i++){
        arr[i] = 0;
    }

    // for(int i=0 ; i<14 ; i++){
    //     cout << arr[i];
    // }

    for(int i=0 ; i<5 ; i++){
        int n;
        cin >> n;
        arr[n]++;
    }

    // for(int i=0 ; i<14 ; i++){
    //     cout << arr[i];
    // }
    // cout << endl ;

    int count1=0 , count2=0 ;

    for(int i=0 ; i<14 ; i++){
        if(arr[i] == 2){
            count1 = 1;
        }
        if(arr[i] == 3){
            count2 = 1;
        }
    }

    if(count1 == 1 && count2 == 1){
        cout << "FULL HORSE";
    }
    else{
        cout << "NOT";
    }

}    