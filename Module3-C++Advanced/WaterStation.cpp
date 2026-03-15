//                            WATER STATION

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int val1 = n%5;
    int val2 = 5 - val1;

    if (val1 < 3){
        cout << n - val1 ;
    }
    else{
        cout << n + val2 ;
    }

    return 0;
}
