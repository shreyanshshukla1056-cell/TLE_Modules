#include<iostream>
using namespace std;
int main(){

//                                 Even, Odd, Positive and Negative
    int N;
    cin >> N;
    int x[N];

    int even =0 , odd =0 , positive=0 , negative =0 ;

    for (int i=0 ; i<N ; i++){
        
        cin >> x[i];
        if (x[i] % 2 == 0){
            even++;
        }
        else {
            odd++;
        }
        
        if (x[i] > 0){
            positive++;
        }
        else if (x[i] < 0){
            negative++;
        }
 
        cout << "Even: " << even << endl;
        cout << "Odd: " << odd << endl;
        cout << "Positive: " << positive << endl;
        cout << "Negative: "  << negative << endl;
    }
}