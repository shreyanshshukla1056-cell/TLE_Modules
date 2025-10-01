#include<iostream>
using namespace std;
int main(){

//                                    One Prime

    int x;
    cin >> x;
    int prime=0;
    for (int i=2 ; i<x ; i++){
        if( x % i == 0){
            prime++;
        }
    }  
    if(prime > 0){
        cout << "NO" << endl;
    }  
    else if (x == 1){
        cout << "NO";
    }
    else {
        cout << "YES" << endl;
    }



    return 0;
}