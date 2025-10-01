#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;
    int x = s.length();
    int count_upper = 0;
    int count_lower = 0;

    for(int i=0 ; i<x ; i++){
        if(isupper(s[i])) {
            count_upper++;
        }
        else{
            count_lower++;
        }
    }
    
    // cout << count_lower << endl;
    // cout << count_upper << endl;

    if(count_upper > count_lower){
        for(int i=0 ; i<x ; i++){
            s[i] = toupper(s[i]);
            cout << s[i];
        }    
    }
    else{
        for(int i=0 ; i<x ; i++){
            s[i] = tolower(s[i]);
            cout << s[i];
        }  
    }

}