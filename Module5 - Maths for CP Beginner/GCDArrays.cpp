#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int l ,r ,k ;
        cin >> l >> r >> k ;

        long long oddCount = (r + 1) / 2 - (l / 2);

        if( (l==r && l>1) || (oddCount <= k) ){
            cout << "YES" << endl ;
        }

        else{
            cout << "NO" << endl ;
        }

    }

    return 0;
}