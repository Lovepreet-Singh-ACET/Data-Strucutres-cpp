#include<bits/stdc++.h>
using namespace std;

int main(){
     #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin>>a>>b;

    for(int i = a; i<=b; i++){
        // cout<<i;
        int flag = 0;
        for(int j=2; j*j<=i; j++){
            // cout<<j;
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag == 0) cout<<i<<" ";
    }
}