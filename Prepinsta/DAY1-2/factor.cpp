#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n , f;
    cin >> n>> f;

    if (n%f==0){
        cout<<true;
    }
    else cout << false;

    return 0;
}