#include<iostream>
#include<cmath>
#include <algorithm>

using namespace std;

int main(){
 
    long long int n;                 // 5*(any number)  --->  last two digit hmesha 25 hi aayega
    cin >> n;                        //  so in any case result will always be 25

    cout << 25;

    // long long int a = pow(5,n);     //  5**(n)------> bhut badi value aayegi , agr n bada liye to
    //                                 //           jo ki hum store ni kr skte h kisi bhi data type me
    // int result[2];

    // for(int i=0 ; i<2 ; i++){
    //     result[i] = a%10;             
    //     a=a/10;                       
    // }

    // // for(int i=0 ; i<2 ; i++){
    // //     cout << result[i];
    // // }

    // reverse(result, result + 2);

    // for(int i=0 ; i<2 ; i++){
    //     cout << result[i];
    // }


    return 0;
}