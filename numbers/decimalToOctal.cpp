#include<bits/stdc++.h>
using namespace std;

int DecimalToOctal(int n){
    int x = 1;
    int ans = 0;

    while(x <= n)
        x *= 8;
    
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans*10 + lastDigit;
    }
}

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int ans = DecimalToOctal(n);
    cout<< ans ;
    

    return 0;
}