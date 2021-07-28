#include<bits/stdc++.h>
using namespace std;


int fact(int n){
    int f = 1;
    for(int i=1; i<n+1; i++){
        f *= i;
    }
    return f;
}
int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, r;
    cin>>n>>r;
    float per;
    per = fact(n)/fact(n-r);
    cout<<per;
    return 0;

}