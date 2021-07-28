#include<bits/stdc++.h>
using namespace std;

// first person   n-1 handshakes
// second person  n-2
// .
// .
// .
// n-1 th person  1
// nth person     0
//  1 + 2 + ............... (n-2) + (n-1)  = n*(n-1)/2
int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

    cout<< (n*(n-1)/2);
    return 0;
}