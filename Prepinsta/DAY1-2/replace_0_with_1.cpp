#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev = 0;
    while(n>0){
        int temp = n %10;
        rev = rev*10 + temp;
        n = n/10;
    }
    return rev;
}
int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >>n;

    int rev = 0;
    while(n>0){
        int temp = n%10;
        if(temp == 0)   temp = 1;
        rev = rev*10 + temp;
        n = n/10;
    }
    // cout<<rev;
    cout<<reverse(rev);
    return 0;
}