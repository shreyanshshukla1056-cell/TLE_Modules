#include<iostream> 
#include<algorithm>

using namespace std ;

int main () {

    string s ;
    cin >> s ;

    int n = s.length() ;

    sort(s.begin(), s.end()) ;

    cout << s ;

    return 0 ;
}