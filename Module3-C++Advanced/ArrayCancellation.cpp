#include<iostream>
using namespace std;

int main(){

    int t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            if(arr[i] > arr[i+1]){
                arr[i]-- ;
                arr[i+1]++ ;
            }
        }
    }

    return 0;
}