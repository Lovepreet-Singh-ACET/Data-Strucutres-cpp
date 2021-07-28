#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, n1=0, n2=1, n3;
    cin>> n;

    cout<<"Fibb: "<<n1<<" "<<n2<<" ";
    for(int i = 2; i<n; i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout<<n3<<" ";
    }

    return 0;
}