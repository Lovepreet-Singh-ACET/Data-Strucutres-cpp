#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int flag = 0;
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            cout<<"not Prime";
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"Is Prime";
    }
}