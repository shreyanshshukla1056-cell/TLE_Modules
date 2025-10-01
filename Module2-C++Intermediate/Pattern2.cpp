//                        PATTERN 

#include<iostream>                 //   1
#include<algorithm>                //   2 3
using namespace std;               //   6 5 4
int main(){                        //   7 8 9 10
                                   //   15 14 13 12 11
    int n;
    cin >> n;
    int num=1;

    for (int i=1; i<=n; i++){
        int a[i];
        for(int j=0; j<i; j++){
            a[j]=num++;
        }
        if(i%2 != 0){
                reverse(a ,a + i);
        }
        for(int j=0; j<i; j++){
            cout << a[j] << " ";   
        }    
        cout << endl;
    }
}    
