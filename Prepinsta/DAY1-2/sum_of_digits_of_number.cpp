#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int sum=0;
    while(n>0){
        int temp = n%10;
        sum += temp;
        n = (int)n/10;
    }

    cout<<sum;
}