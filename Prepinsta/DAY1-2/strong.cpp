#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int f =1;
    for(int i=1; i<n+1; i++){
        f *=i;
    }
    return f;
}

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>> n;

    int sum = 0;
    int safe = n;
    while(n>0){
        int temp = n%10;
        sum += fact(temp);
        n = (int) n/10;
    }

    if (safe == sum){
        cout << "Strong";
    }
    else cout << "Not a Strong Number";

    return 0;
}