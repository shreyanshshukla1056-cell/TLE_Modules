#include<iostream>
using namespace std;

int main(){

    int n ; cin >> n;
    
    int hour = n/60 ;
    
    int min = n % 60;

    if(min < 10){
        cout << 21 + hour << ":" << "0" << min ;
    } 
    else{
        cout << 21 + hour << ":" << min ;
    }

    return 0;
}