#include<iostream>
using namespace std;

int BinaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n > 0){
        int y = n % 10;
        ans += x*y;
        x *= 2;
        n /= 10;
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
    int ans = BinaryToDecimal(n);
    cout<< ans ;
    

    return 0;
}