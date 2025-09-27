//           Digits Summation

# include<iostream>
using namespace std;

int main(){

    long long int N,M;
    cin>>N; 
    cin>>M;  

    int x,y;

    x = M%10;
    y = N%10;

    cout<< x+y;
}
