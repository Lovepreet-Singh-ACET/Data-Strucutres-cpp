#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int square_n = n*n;
    int flag=0;
    while(n>0){
        if(n%10 != square_n%10){
            flag = 1;
            break;
        }
        n/=10;
        square_n/=10;
    }
    if(flag == 1){
        cout<<"Not";
    }
    else cout<<"Automorphic";
}