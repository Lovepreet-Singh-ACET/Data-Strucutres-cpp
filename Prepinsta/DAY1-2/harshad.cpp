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
    int temp = n;
    while(temp>0){
        int t = temp%10;
        sum+=t;
        temp = temp/10;
    }
    if(n%sum==0) cout << "Harshad Number";
    else cout<<"Not";
    return 0;
}