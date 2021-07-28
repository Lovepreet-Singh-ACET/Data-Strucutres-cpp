#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin >> a >>b;
    if(b==0){ 
        cout<< 1;
        return 0;
    }

    for(int i = 1; i<b; i++){
        a *= a;
    }
    cout<<a;
    return 0;
}