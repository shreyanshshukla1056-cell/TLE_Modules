//       Max and Min

#include<iostream>
using namespace std;
int main(){

    int A,B,C;
    cin >> A >> B >> C;

    if(A>B){
        if(B>C){
            cout<<C<<A;
        }
        else{
            cout<<B<<A;
        }
    }

    else if(B>C){
        if(C>A){
            cout<<A<<B;
        }
        else{
            cout<<C<<B;
        }
    }
    
    else if(C>A){
        if(A>B){
            cout<<B<<C;
        }
        else{
            cout<<A<<C;
        }
    }    
}