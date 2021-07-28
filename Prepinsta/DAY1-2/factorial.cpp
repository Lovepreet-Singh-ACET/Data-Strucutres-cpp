#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0) return 1;
    int fact =1;
    for(int i = 1; i<n+1; i++){
        fact = fact * i;
    }
    return fact;
}


int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >>n;

    cout<<fact(n);
    return 0;
}