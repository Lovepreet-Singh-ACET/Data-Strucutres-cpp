#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    cout<<fact;

    return 0;
}