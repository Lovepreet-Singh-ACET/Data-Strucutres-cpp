#include<bits/stdc++.h>
using namespace std;

int DecimalToBinary(int n){
    int x = 1;
    int ans = 0;
    while(x <=n) 
        x *= 2;
    
    x /= 2;

    while(x>0){
        int lastDigit = n/x;
        n -= x*lastDigit;
        x /= 2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int ans = DecimalToBinary(n);
    cout<< ans ;
    

    return 0;
}