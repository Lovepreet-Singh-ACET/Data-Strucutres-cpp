#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int f_sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            f_sum+=i;
        }
    }
    if (n==f_sum) cout<< "Perfect";
    else cout <<"Not perfect";
    return 0;
}