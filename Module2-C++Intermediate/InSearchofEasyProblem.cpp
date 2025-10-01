#include <iostream>
using namespace std;
int main() {
//               In Search of an Easy Problem
    int n;
    cin >> n;
    int x[n];
    int count0=0;
    int count1=0;

    for (int i=0 ; i<n ; i++) {
        cin >> x[i];
        if (x[i] == 0){
            count0++;
        }
        else if (x[i] == 1){
            count1++;
        }
    }
    if (count1 == 0){
        cout << "EASY" << endl;
    }
    else{ 
        cout << "HARD" << endl;
        }
}